#include <iostream>
int main() {
	char* str = "Hello, World";
	int* pi = (int*)str;
	char* pc = (char*)*pi;

	std::cout << pc << std::endl;
	return 0;
}
