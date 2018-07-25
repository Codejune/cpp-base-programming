#include <iostream>
int main() { 
	bool b = true;
	std::cout.setf(std::ios::boolalpha);
	std::cout << b << std::endl;
	std::cout << !b << std::endl;

	std::cout.unsetf(std::ios::boolalpha);
	std::cout << b << std::endl;
	std::cout << !b << std::endl;
	return 0;
}
