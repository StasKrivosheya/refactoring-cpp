#include <iostream>

int main()
{
	int n;

	std::cout << "N: ";
	std::cin >> n;

	std::cout << (long double)n * (n + 1) / 2 << std::endl;

	system("pause");
	return 0;
}