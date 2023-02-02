#include "Span.h"

int main()
{
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	try {
		sp.addNumber(55);
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(4);

	sp1.addNumber(77);
	try {
		cout << sp1.longestSpan() << endl;
		cout << sp1.shortestSpan() << endl;
	}
	catch (std::exception &e)
	{
		cout << e.what() << endl;
	}
	return 0;
}