#include <iostream>
void f(int a) {
	std::cout << "f(int)" << std::endl;
}

void f(int* p) {
	std::cout << "f(int*)" << std::endl;
}

int main() {
	f(0);
	f(NULL);
	return 0;
}
