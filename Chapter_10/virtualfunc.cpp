#include <iostream>

class Person {
	public:
		Person() {
			std::cout << "Call Person()\n";
		}
		~Person() {
			std::cout << "Call ~Person()\n";
		}
		virtual void doWork() {
			std::cout << "Working ... \n";
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
	Programmer pro;
	Person &p = pro; // 참조자 형식
	p.doWork();

	Person *per = new Programmer; // 포인터 형식
	per->doWork();
}
			
