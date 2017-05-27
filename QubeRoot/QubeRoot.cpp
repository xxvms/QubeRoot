// QubeRoot.cpp : Defines the entry point for the console application.
//

#include <iostream>

void qube(int* ptr);

int main()
{
	int i;
	std::cout << "please provide number: ";
	std::cin >> i;

	int* ptr = &i;

	qube(ptr);

	std::cout << "Qube of i is: " << i << std::endl;

	system("pause");
    return 0;
}
void qube(int* ptr)
{
	*ptr *= *ptr * *ptr;
}
