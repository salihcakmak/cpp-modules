#ifndef _CONVERT_H_
#define _CONVERT_H_

#include <iostream>
#include <string.h>

using std::cout;
using std::endl;
using std::string;

class Convert {

public:
	Convert();
	Convert(const Convert& other);
	Convert& operator=(const Convert& other);
	~Convert();
	void infoTypes(string value);

private:
	void toChar(string str);
	void toInt(string str);
	void toFloat(string str);
	void toDouble(string str);
	void printNumber(char c, char type);
	bool isNan(string str);
	string toUpperCase(string str);
};


#endif
