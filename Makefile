# Copyright 2016 Google Inc.
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
#     http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.

SPEECH_PROTO_PATH = google/cloud/speech/v1beta1
GOOGLEAPIS_CCS = $(shell find $(GOOGLEAPIS_GENS_PATH) -name '*.pb.cc')
CXX = g++
CPPFLAGS += -I/usr/local/include -pthread -I$(GOOGLEAPIS_GENS_PATH)
CXXFLAGS += -std=c++11

.PHONY: clean

libgoogleapis.a: $(GOOGLEAPIS_CCS:.cc=.o)
	ar rvs $@ $?

install:
	echo "[INSTALL] Installing libgoogleapis.a"
	cp libgoogleapis.a /usr/local/lib/
clean:
	rm -f *.o libgoogleapis.a $(GOOGLEAPIS_CCS:.cc=.o)

