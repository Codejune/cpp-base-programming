#include <iostream>

class Person {
	public:
		Person() {
			std::cout << "Call Person()\n";
		}
		virtual ~Person() {
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
	Person *per = new Programmer; // 포인터 형식
	per->doWork();
	delete per;
}
			
