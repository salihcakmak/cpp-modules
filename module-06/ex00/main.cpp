#include "Convert.h"

int main(int ac,char **av)
{
	if (ac != 2)
	{
		cout << "Usage: ./convert [value]" << endl;
		return 0;
	}
	Convert convert;
	convert.infoTypes(av[1]);
}
