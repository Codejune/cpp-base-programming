#include <iostream>

class Person {
	public :
		Person() {
			std::cout << "Call Person()\n";
		}
		~Person() {
			std::cout << "Call ~Person()\n";
		}

		void doWork() {
			std::cout << "Working ...\n";
		}
};

class Programmer : public Person {
	public :
		Programmer() : Person() {
			std::cout << "Call Programmer()\n";
		}
		~Programmer() {
			std::cout << "Call ~Programmer()\n";
		}
		void doWork() {
			std::cout << "Programming ...\n";
		}
};

int main() {
	Person p;
	p.doWork();
	Programmer pr;
	pr.doWork();
}
