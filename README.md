# gRPC-based Google API installation assistance for C++
 - Follow [Google's guide](https://github.com/GoogleCloudPlatform/cpp-docs-samples/tree/master/speech/api) to configure the system and run test.
 - Remember to create an App engine (e.g. Python)!
 
	- **Installation Order**
		1. protobuf 3.1.0
		2. latest gRPC (not release version)
		3. Google APIs

- use the Makefile to package and install the google APIs into the system for easier compilation:
 
	```sh
	$ make
	$ (sudo) make install
	```

(this Makefile is modified from the same guide)
- note that `GOOGLEAPIS_GENS_PATH` must be set correctly
use ' nano ~/.bashrc' and add the following line to the end of the file :
	```
	export GOOGLEAPIS_GENS_PATH=$HOME/path/to/googleapis/gens
	```
- This project is based on Visual Studio for Linux C++ development on Raspberry Pi and the other codes and configurations may not be suitable for use otherwise
