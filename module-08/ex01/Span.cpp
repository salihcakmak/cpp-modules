#include "Span.h"

Span::Span() {
	_size = 0;
}

Span::Span(unsigned int n) {
	_size = n;
	_vec.reserve(n);
}

Span::Span(const Span &other) {
	*this = other;
}

Span &Span::operator=(const Span &other) {
	_size = other._size;
	_vec = other._vec;
	return *this;
}

void Span::addNumber(int number) {
	if (_vec.size() == _size)
		throw VectorIsFullException();
	_vec.push_back(number);
}

int Span::shortestSpan() {
	if (_vec.size() < 2)
		throw VectorIsTooSmallException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	int min = *tmp.begin();
	for (std::vector<int>::iterator it = tmp.begin();  it != tmp.end() -1; it++) {
		if ((*std::next(it) - *it) < min)
			min = *std::next(it) - *it;
	}
	return min;
}

int Span::longestSpan() {
	if (_vec.size() < 2)
		throw VectorIsTooSmallException();
	std::vector<int> tmp = _vec;
	std::sort(tmp.begin(), tmp.end());
	int result = *(tmp.end() - 1) - *tmp.begin();
	return result;
}

const char* Span::VectorIsFullException::what() const throw() {
	return "Vector is full";
}

const char* Span::VectorIsTooSmallException::what() const throw() {
	return "Vector is too small";
}

Span::~Span() {}
