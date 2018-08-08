#include <iostream>

class Person {
	public:
		Person() {
			std::cout << "Call Person()\n";
		}
		virtual ~Person() {
			std::cout << "Call ~Person()\n";
		}
		virtual void doWork() = 0; // 순수 가상 함수 선언
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
	//Person per;
	Person *per = new Programmer;
	per->doWork();
	delete per;
}
			
