#include "base64.h"
#include <iostream>
#include <fstream>
#include <cstring>
#include "web_client.h"
using namespace std;

int main() {
	//read
	std::ifstream file("testing-voice.pcm", ifstream::binary);
	int contentSize = 20480;//bytes
	char* fileContent = (char*)malloc(contentSize+44);

	file.seekg(0, ifstream::beg);
	file.read(fileContent+44, contentSize);
	file.close();

	struct waveHeader{
		// RIFF header.		
		char riff[4] = {'R', 'I', 'F', 'F'};// Chunk ID.		
		uint32_t riffSize;// Chunk size.		
		char wave[4] = { 'W', 'A', 'V', 'E' };// Format.

		// fmt block
		char fmt[4] = { 'f', 'm', 't', ' ' };
		uint32_t fmtSize = 16;// fmt block size: 16 - normal, 18 - extra data		
		
		//fmt block wave format definition
		uint16_t formatTag = 1;// Audio format (floating point (3) or PCM (1)). Any other format indicates compression.
		uint16_t numChannels = 1;// Channels.		
		uint32_t samplingRate = 16000;// Sampling rate.		
		uint32_t avgByteRate = 32000;// Average bytes per second =sampleRate * channelCount * (bitDepth / 8)
		uint16_t blockAlign = 2; //channelCount * (bitDepth / 8)
		uint16_t bitDepth = 16; // Bits per sample;

		// data block		
		char data[4] = { 'd', 'a', 't', 'a' };
		uint32_t dataSize;// data size.

	} header;

	header.riffSize = contentSize + 36;
	header.dataSize = contentSize;
	memcpy(fileContent, &header, 44);

	std::string encoded = base64_encode(reinterpret_cast<const unsigned char*>(fileContent), contentSize + 44);

	/*
	std::ofstream outfile("voice.wav", ofstream::binary);
	cout << "writing..." << endl;
	outfile.write((const char*)fileContent, contentSize+44);
	outfile.close();
	*/

	sprec_server_response *resp;
	int err;
	char *text;

	/*
	* ...and send it to Google
	*/
	resp = sprec_send_audio_data(buf, len, apikey);

	if (resp == NULL) {
		return NULL;
	}

	/*
	* Get the JSON from the response object,
	* then parse it to get the actual text and confidence
	*/
	text = strdup(resp->data);
	sprec_free_response(resp);

	cout << text << endl;
}