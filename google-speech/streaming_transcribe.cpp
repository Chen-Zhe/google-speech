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

#include <chrono>
#include <fstream>
#include <iostream>
#include <iterator>
#include <string>
#include <thread>

#include "google/cloud/speech/v1beta1/cloud_speech.grpc.pb.h"

using google::cloud::speech::v1beta1::RecognitionConfig;
using google::cloud::speech::v1beta1::Speech;
using google::cloud::speech::v1beta1::StreamingRecognizeRequest;
using google::cloud::speech::v1beta1::StreamingRecognizeResponse;

// Write the audio in 64k chunks at a time, simulating audio content arriving
// from a microphone.
static void MicrophoneThreadMain(
    grpc::ClientReaderWriterInterface<StreamingRecognizeRequest,
                                      StreamingRecognizeResponse>* streamer) {
  StreamingRecognizeRequest request;
  std::ifstream file_stream("testing-voice.pcm");
  const size_t chunk_size = 20 * 1024;
  std::vector<char> chunk(chunk_size);

  while (true) {
    // Read another chunk from the file.
    std::streamsize bytes_read =
        file_stream.rdbuf()->sgetn(&chunk[0], chunk.size());
    // And write the chunk to the stream.
    request.set_audio_content(&chunk[0], bytes_read);
    std::cout << "Sending " << bytes_read / 1024 << "k bytes." << std::endl;
    streamer->Write(request);
    if (bytes_read < chunk.size()) {
      // Done reading everything from the file, so done writing to the stream.
      //streamer->WritesDone();
      break;
    } else {
      // Wait a second before writing the next chunk.
      std::this_thread::sleep_for(std::chrono::seconds(1));
    }
  }
  std::ifstream file_stream2("brown-fox.pcm");
  std::vector<char> chunk2(chunk_size);

  while (true) {
	  // Read another chunk from the file.
	  std::streamsize bytes_read =
		  file_stream2.rdbuf()->sgetn(&chunk2[0], chunk2.size());
	  // And write the chunk to the stream.
	  std::cout << "Sending " << bytes_read / 1024 << "k bytes." << std::endl;
	  request.set_audio_content(&chunk2[0], bytes_read);
	  
	  streamer->Write(request);
	  if (bytes_read < chunk2.size()) {
		  // Done reading everything from the file, so done writing to the stream.
		  streamer->WritesDone();
		  break;
	  }
	  else {
		  // Wait a second before writing the next chunk.
		  std::this_thread::sleep_for(std::chrono::seconds(1));
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

  // Begin a stream.
  grpc::ClientContext context;
  auto streamer = speech->StreamingRecognize(&context);
  // Write the first request, containing the config only.
  streaming_config->set_interim_results(true);
  streamer->Write(request);
  // The microphone thread writes the audio content.
  std::thread microphone_thread(&MicrophoneThreadMain, streamer.get());
  // Read responses.
  StreamingRecognizeResponse response;
  while (streamer->Read(&response)) {  // Returns false when no more to read.
    // Dump the transcript of all the results.
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
  grpc::Status status = streamer->Finish();
  microphone_thread.join();
  if (!status.ok()) {
    // Report the RPC failure.
    std::cerr << status.error_message() << std::endl;

	std::cerr << "If 'invalid authentication credential' error comes up"
		<<", manually sync R-pi's time" << std::endl;
    return -1;
  }
  return 0;
}
