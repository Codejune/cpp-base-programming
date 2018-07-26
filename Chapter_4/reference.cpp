#include <iostream>
int main() {
	//int& ref
	int i = 10;
	int& ref = i;

	ref += 10;
	std::cout << "i = " << i << std::endl;
	std::cout << "ref = " << ref << std::endl;
	return 0;
}
