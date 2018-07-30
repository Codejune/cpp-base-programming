#include <iostream>

class Person {
	private :
		double height;
		double weight;
	public :
		Person() {}
		Person(double _height, double _weight)
			: height(_height), weight(_weight){}
		void setHeight(double height) {
			height = height;
		}
		double getHeight() {
			return height;
		}
};

int main() {
	Person p(183.4, 78.5);
	p.setHeight(182.8);
	std::cout << p.getHeight() << std::endl;
	return 0;
}
