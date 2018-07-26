#include <iostream>
void print() {
	std::cout << "A's print" << std::endl;
}

void print() {
	std::cout << "B's print" << std::endl;
}

int main() {
	print();
	return 0;
}
