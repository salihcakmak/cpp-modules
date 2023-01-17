#include "Bureaucrat.h"

int main()
{
	try{
		Bureaucrat bureaucrat("Bob", 145);
		cout << bureaucrat;
		for (int i = 0; i < 10; ++i) {
			bureaucrat.decrement();
			cout << bureaucrat << endl;
		}

		Bureaucrat bureaucratTwo("Andrew", 5);
		cout << bureaucratTwo;
		for (int i = 0; i < 10; ++i) {
			bureaucratTwo.increment();
			cout << bureaucratTwo << endl;
		}

		Bureaucrat bureaucratThree("Andrew", 0);
	}
	catch(std::exception& e) {
		cout << e.what() << endl;
	}
	return 0;
}
