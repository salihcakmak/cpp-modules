#include "Convert.h"

Convert::Convert() {
	//cout << "Default Constructor called" << endl;
}

Convert::~Convert() {
	//cout << "Destructor called" << endl;
}

Convert::Convert(const Convert &other) {
	*this = other;
}

Convert &Convert::operator=(const Convert &other) {
	return *this;
}

void Convert::infoTypes(string value) {
	toChar(value);
	toInt(value);
	toFloat(value);
	toDouble(value);
}

void Convert::toChar(string str) {
	char c = 0;

	if (isNan(str)){
		cout << "char: impossible" << endl;
		return;
	}
	try {
		c = std::stoi(str);
	}
	catch (std::exception e) {
		if (str.length() == 1 && isprint(str[0]))
			c = str[0];
	}
	cout << "char: " << (isprint(c) ? string(1, c).c_str() : " Non displayable") << endl;
}


void Convert::toInt(string str) {
	int n = 0;

	if (isNan(str)) {
		cout << "int: impossible" << endl;
		return;
	}

	try {
		n = std::stoi(str);
	}
	catch (std::exception e) {
		if(str.length() == 1 && isprint(str[0])){
			printNumber(str[0],'i');
			return;
		}
		cout << "int: Non displayable" << endl;
		return;
	}
	cout << "int: " << n << endl;
}

void Convert::toFloat(string str) {
	float n = 0;

	if (isNan(str)) {
		cout << "float: nanf" << endl;
		return;
	}

	try {
		n = std::stof(str);
	}
	catch (std::exception e) {
		if(str.length() == 1 && isprint(str[0])){
			printNumber(str[0],'f');
			return;
		}
		cout << "float: Non displayable" << endl;
		return;
	}
	if (n == static_cast<int>(n))
		cout << "float: " << n << ".0f" << endl;
	else
		cout << "float: " << n << "f" << endl;
}

void Convert::toDouble(string str) {
	double n = 0;

	if (isNan(str)) {
		cout << "double: nan" << endl;
		return;
	}
	try {
		n = std::stod(str);
	}
	catch (std::exception e) {
		if(str.length() == 1 && isprint(str[0])){
			printNumber(str[0],'d');
			return;
		}
		cout << "double: Non displayable" << endl;
		return;
	}
	if (n == static_cast<int>(n))
		cout << "double: " << n << ".0" << endl;
	else
		cout << "double: " << n << endl;
}

void Convert::printNumber(char c, char type) {
	if(type == 'i')
		cout << "int : " << static_cast<int>(c) << endl;
	else if(type == 'f')
		cout << "float: " << static_cast<float>(c) << ".0f" << endl;
	else if(type == 'd')
		cout << "double: " << static_cast<double>(c) << ".0" << endl;
}

bool Convert::isNan(string str) {

	return (!strcmp(toUpperCase(str).c_str(), "NAN"));
}

string Convert::toUpperCase(string str) {
	string tmp = str;
	for (int i = str.length() - 1; i >= 0; i--)
		tmp[i] = toupper(tmp[i]);
	return tmp;
}