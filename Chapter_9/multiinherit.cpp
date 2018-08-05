#include <iostream>

class Person {
	public:
		Person() {
			std::cout << "Call Person()" << std::endl;
		}
		~Person() {
			std::cout << "Call ~Person()" << std::endl;
		}
};

class Programmer : public Person {
	public:
		Programmer() : Person() {
			std::cout << "Call Programmer()" << std::endl;
		}
		~Programmer() {
			std::cout << "Call ~Programmer()" << std::endl;
		}
};

class Designer : public Person {
	public :
		Designer() : Person() {
			std::cout << "Call Designer()" << std::endl;
		}
		~Designer() {
			std::cout << "Call ~Designer()" << std::endl;
		}
};

class Multi : public Programmer, public Designer {
	public:
		Multi() : Programmer(), Designer() {
			std::cout << "Call Multi()" << std::endl;
		}
		~Multi() {
			std::cout << "Call ~Multi()" << std::endl;
		}
};

int main() {
	Multi p1;
}
