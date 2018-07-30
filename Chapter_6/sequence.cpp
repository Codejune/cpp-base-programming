#include <iostream>

class A {
	public:
		A() {
			std::cout << "A() Called!\n";
		}
		~A() {
			std::cout << "~A() Called!\n";
		}
};

class B {
	public:
		B() {
			std::cout << "B() Called!\n";
		}
		~B() {
			std::cout << "~B() Called!\n";
		}
};

int main() {
	A a;
	B b;
	return 0;
}

