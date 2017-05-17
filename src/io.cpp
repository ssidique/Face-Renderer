// io.cpp

#include "../include/io.hpp"

void input(string filename, GLfloat *data) {
	string line;
	string::size_type sz;

	ifstream myfile (filename);
	if (myfile.is_open())
	{
		int i = 0, j = 0, k = 0;
		while ( getline (myfile,line) )
		{
			j = i + 1; k = i + 2;
			sz = 0;
			double first = stod(line, &sz);
			*(data + i) = first;
			line = line.substr(sz);
			double second = stod(line, &sz);
			*(data + j) = second;
			line = line.substr(sz);
			double third = stod(line, &sz);
			*(data + k) = third;
			i += 3;
		}
		myfile.close();
	}
	else cout << "Unable to open file"; 
}

void input(string filename, GLuint *data) {
	string line;
	string::size_type sz;

	ifstream myfile (filename);
	if (myfile.is_open())
	{
		int i = 0, j = 0, k = 0;
		while ( getline (myfile,line) )
		{
			j = i + 1; k = i + 2;
			sz = 0;
			int first = stoi(line, &sz);
			*(data + i) = first;
			line = line.substr(sz);
			int second = stoi(line, &sz);
			*(data + j) = second;
			line = line.substr(sz);
			int third = stoi(line, &sz);
			*(data + k) = third;
			i += 3;
		}
		myfile.close();
	}
	else cout << "Unable to open file"; 
}