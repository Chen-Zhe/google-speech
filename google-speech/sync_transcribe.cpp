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

#include "google/cloud/speech/v1beta1/cloud_speech.grpc.pb.h"

using google::cloud::speech::v1beta1::RecognitionConfig;
using google::cloud::speech::v1beta1::Speech;
using google::cloud::speech::v1beta1::SyncRecognizeRequest;
using google::cloud::speech::v1beta1::SyncRecognizeResponse;


int main(int argc, char** argv) {
	std::cout << "press enter to start" << std::endl;
	getchar();
  // Create a Speech Stub connected to the speech service.
  auto creds = grpc::GoogleDefaultCredentials();
  auto channel = grpc::CreateChannel("speech.googleapis.com", creds);
  std::unique_ptr<Speech::Stub> speech(Speech::NewStub(channel));
  // Parse command line arguments.
  SyncRecognizeRequest request;

  request.mutable_config()->set_sample_rate(16000);
  request.mutable_config()->set_encoding(RecognitionConfig::LINEAR16);
  request.mutable_config()->set_language_code("en-US");

  char* file_path = "testing-voice.pcm";
  // Load the audio file from disk into the request.
  request.mutable_audio()->mutable_content()->assign(
      std::istreambuf_iterator<char>(std::ifstream(file_path).rdbuf()),
      std::istreambuf_iterator<char>());
  // Send audio content using SyncRecognize().
  grpc::ClientContext context;
  SyncRecognizeResponse response;
  grpc::Status rpc_status = speech->
        SyncRecognize(&context, request, &response);
  if (!rpc_status.ok()) {
    // Report the RPC failure.
    std::cerr << rpc_status.error_message() << std::endl;
    return -1;
  }
  // Dump the transcript of all the results.
  for (int r = 0; r < response.results_size(); ++r) {
    auto result = response.results(r);
    for (int a = 0; a < result.alternatives_size(); ++a) {
      auto alternative = result.alternatives(a);
      std::cout << alternative.confidence() << "\t"
                << alternative.transcript() << std::endl;
    }
  }
  return 0;
}
