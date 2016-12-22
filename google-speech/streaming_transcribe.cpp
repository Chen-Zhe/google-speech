// Copyright 2016 Google Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
#include <grpc++/grpc++.h>

#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <pthread.h>
#include <unistd.h>

#include "google/cloud/speech/v1beta1/cloud_speech.grpc.pb.h"

using google::cloud::speech::v1beta1::RecognitionConfig;
using google::cloud::speech::v1beta1::Speech;
using google::cloud::speech::v1beta1::StreamingRecognizeRequest;
using google::cloud::speech::v1beta1::StreamingRecognizeResponse;

typedef std::unique_ptr<grpc::ClientReaderWriter<StreamingRecognizeRequest, StreamingRecognizeResponse>> RecognitionDataStreamer;

RecognitionDataStreamer streamer;

// Write the audio in 64k chunks at a time, simulating audio content arriving
// from a microphone.

void *StreamingSpeechRecognition(void *null) {


	StreamingRecognizeResponse response;
	while (streamer->Read(&response)) {  // Returns false when no more to read.
										 // Dump the transcript of all the results.
		std::cout << "response read" << std::endl;
		for (int r = 0; r < response.results_size(); ++r) {
			auto result = response.results(r);
			std::cout << "Result stability: " << result.stability() << std::endl;
			for (int a = 0; a < result.alternatives_size(); ++a) {
				auto alternative = result.alternatives(a);
				std::cout << alternative.confidence() << "\t"
					<< alternative.transcript() << std::endl;
			}
		}
	}



  
 
}

int main(int argc, char** argv) {
	std::cout << "press enter to start" << std::endl;
	getchar();

  // Create a Speech Stub connected to the speech service.
  auto creds = grpc::GoogleDefaultCredentials();
  auto channel = grpc::CreateChannel("speech.googleapis.com", creds);
  std::unique_ptr<Speech::Stub> speech(Speech::NewStub(channel));
  // Parse command line arguments.
  StreamingRecognizeRequest request;
  auto* streaming_config = request.mutable_streaming_config();

  streaming_config->mutable_config()->set_sample_rate(16000);
  streaming_config->mutable_config()->set_encoding(RecognitionConfig::LINEAR16);
  streaming_config->mutable_config()->set_language_code("en-US");
  streaming_config->set_interim_results(true);

  // Begin a stream.
  grpc::ClientContext *context = new grpc::ClientContext;
  streamer = speech->StreamingRecognize(context);
  // Write the first request, containing the config only.
  
  streamer->Write(request);
  // The microphone thread writes the audio content.
  pthread_t microphone;
  pthread_create(&microphone, NULL, StreamingSpeechRecognition, (void *)NULL);
  // Read responses.
  StreamingRecognizeRequest streamReq;
  std::ifstream file_stream("brown-fox.pcm");
  const size_t chunk_size = 20 * 1024;
  std::vector<char> chunk(chunk_size);
  while (true) {
	  // Read another chunk from the file.
	  std::streamsize bytes_read =
		  file_stream.rdbuf()->sgetn(&chunk[0], chunk.size());
	  // And write the chunk to the stream.
	  streamReq.set_audio_content(&chunk[0], bytes_read);
	  std::cout << "Sending " << bytes_read / 1024 << "k bytes." << std::endl;
	  streamer->Write(streamReq);
	  if (bytes_read < chunk.size()) {
		  // Done reading everything from the file, so done writing to the stream.
		  streamer->WritesDone();
		  break;
	  }
	  else {
		  // Wait a second before writing the next chunk.
		  sleep(1);
	  }
  }
  
  grpc::Status status = streamer->Finish();
  pthread_join(microphone, NULL);
  if (!status.ok()) {
    // Report the RPC failure.
    std::cerr << status.error_message() << std::endl;

	std::cerr << "If 'invalid authentication credential' error comes up"
		<<", manually sync R-pi's time" << std::endl;
    return -1;
  }
  return 0;
}
