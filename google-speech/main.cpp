#include "base64.h"
#include <iostream>

int main() {
	const std::string s = "ADP GmbH\nAnalyse Design";

	std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(s.c_str()), s.length());
	std::string decoded = base64_decode(encoded);

	std::cout << "encoded: " << encoded << std::endl;
	std::cout << "decoded: " << decoded << std::endl;

	getchar();
	return 0;
}