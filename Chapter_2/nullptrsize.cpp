#include <iostream>

int main() {
	std::cout << sizeof(nullptr) << std::endl;

	std::cout << typeid(nullptr).name() << std::endl;
	return 0;
}
