#include <iostream>

class Person {
	private:
		double height;
		double weight;
	public:
		Person(double _height, double _weight) {
			height = _height;
			weight = _weight;
		}
};

int main() {
	Person p1(183.4, 78.5);
	Person p2; // Error!
	return 0;
}
