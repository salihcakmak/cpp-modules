#include <iostream>
#include "iter.h"

template<class T> void iter(T *arr, int size, void (*f)(T value))
{
	for(int i = 0; i < size; i++)
		f(arr[i]);
}

template<typename T>
void print(T  value)
{
	std::cout << value << std::endl;
}


int main()
{
	int tab[] = {0, 1, 2, 3, 4};
	std::string tab2[] = {"sa", "da", "ka"};
	iter(tab, 5, print);
	iter(tab2, 3, print);
	return 0;
}