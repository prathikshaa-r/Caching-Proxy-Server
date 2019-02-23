#ifndef _HTTPREQUEST_H
#define _HTTPREQUEST_H
#include <iostream>
#include <vector>
#include <string>

#define MAX_BUFFER 65536

using namespace std;

class HTTPrequest{

public:
	
	vector<char> request_buffer;

	string request_line;
	string server;
	string http_method;
	string http_type;

	int server_port_num;
	int total_length;
	int header_length;
	int content_length;


	int get_content_length();
	int set_fields();
	string return_etag();
	string return_header();
	bool header_receive_successful();

	HTTPrequest(){
		this->header_length = 0;
		this->content_length = 0;
		this->total_length = 0;
		request_buffer.resize(MAX_BUFFER);
	};
	~HTTPrequest(){};

};

#endif




