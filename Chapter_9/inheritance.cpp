#include <iostream>

class Person {
	private :
		double height;
		double weight;
	public:
		Person(double _height, double _weight) {
			height = _height;
			weight = _weight;
			std::cout << "Call Person()" << std::endl;
		}
		~Person() {
			std::cout << "Call ~Person()" << std::endl;
		}
};

class Programmer : public Person {
	private : 
		int numOfLanguage;
	public:
		Programmer(double _height, double _weight, int lang) : Person(_height, _weight) {
			numOfLanguage = lang;
			std::cout << "Call Programmer()" << std::endl;
		}
		~Programmer() {
			std::cout << "Call ~Programmer()" << std::endl;
		}
};

int main() {
	Programmer p1(183.4, 78.5, 3);
	return 0;
}
