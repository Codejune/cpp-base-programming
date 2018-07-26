#include <iostream>
namespace A {
	void print() { 
		std::cout << "A's print()" << std::endl;
	}
}

namespace B {
	void print() {
		std::cout << "B's print()" << std::endl;
	}
}

int main() {
	A::print();
	B::print();
	return 0;
}
