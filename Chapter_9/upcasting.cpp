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
	/*
	Programmer pr;
	Person p = pr;
	p.doWork();
	*/

	// 참조자 형식
	Programmer pro;
	Person &p = pro;
	p.doWork();

	// 포인터 형식
	//Person *per = new Programmer;
	//per->doWork();
}
