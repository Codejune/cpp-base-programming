#include <iostream>

class Person {
	public:
		Person() {
			std::cout << "Call Person()\n";
		}
		virtual ~Person() {
			std::cout << "Call ~Person()\n";
		}
		void sleep() {
			std::cout << "Sleep...\n";
		}
};

class Programmer : public virtual Person {
	public :
		Programmer() : Person() {
			std::cout << "Call Programmer()\n";
		}
		virtual ~Programmer() {
			std::cout << "Call ~Programmer()\n";
		}
};

class Designer : public virtual Person {
	public:
		Designer() : Person() {
			std::cout << "Call Designer()\n";
		}
		virtual ~Designer() {
			std::cout << "Call ~Designer()\n";
		}
};

class Multi : public Programmer, public Designer {
	public:
		Multi() : Programmer(), Designer() {
			std::cout << "Call Multi()\n";
		}
		~Multi() {
			std::cout << "Call ~Multi()\n";
		}
};

int main() {
	Multi m1;
	m1.sleep();
}
			
