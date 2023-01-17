#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	try {
		Bureaucrat bureaucrat("Salih Çakmak", 5);
	}
	catch (std::exception &e){
		cout << e.what() << endl;
	}

	try {
		Bureaucrat bureaucrat("Salih Çakmak", 0);
	}
	catch (std::exception &e){
		cout << e.what() << endl;
	}


	try {
		Bureaucrat bureaucrat("Salih Çakmak", 151);
	}
	catch (std::exception &e){
		cout << e.what() << endl;
	}


	try {
		Bureaucrat bureaucrat("Salih Çakmak", 5);
		Form form("Teknik Şartname", 10, 3);

		bureaucrat.signForm(form);
	}
	catch (std::exception &e){
		cout << e.what() << endl;
	}


	try {
		Bureaucrat bureaucrat("Salih Çakmak", 12);
		Form form("Teknik Şartname", 10, 3);

		bureaucrat.signForm(form);
	}
	catch (std::exception &e){
		cout << e.what() << endl;
	}
	return 0;
}
