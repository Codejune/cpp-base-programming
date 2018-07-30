#include <iostream>

class Person {
	private :
		double height;
		double weight;
	public:
		Person() {
			std::cout << "Person() Called!\n";
		}
};

int main() {
	Person p1;
	Person* p2 = new Person();
	return 0;
}
