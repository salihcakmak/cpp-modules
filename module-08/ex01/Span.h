#ifndef _SPAN_H_
#define _SPAN_H_

#include <iostream>
#include <vector>

using std::cout;
using std::endl;

class Span {
public:
	Span();
	Span(unsigned int n);
	Span(const Span& other);
	Span& operator=(const Span& other);
	~Span();

	void addNumber(int number);
	int shortestSpan();
	int longestSpan();

class VectorIsFullException : public std::exception {
public:
	const char* what() const throw();
};

class VectorIsTooSmallException : public std::exception {
public:
	const char* what() const throw();
};

private:
	std::vector<int> _vec;
	unsigned int _size;
};


#endif
