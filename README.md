# gRPC-based Google API installation assistance for C++
This project is based on Visual Studio for Linux C++ development on Raspberry Pi

 - Follow this guide to configure the system and run test: https://github.com/GoogleCloudPlatform/cpp-docs-samples/tree/master/speech/api
 - use the Makefile to package and install the google APIs into the system for easier compilation:
	```sh
	$ make
	$ (sudo) make install
	```

- (this Makefile is modified from cpp-docs-samples)
- note that `GOOGLEAPIS_GENS_PATH` must be set correctly
use ' nano ~/.bashrc' and add the following line to the end of the file :
	```
	export GOOGLEAPIS_GENS_PATH=$HOME/path/to/googleapis/gens
	```
