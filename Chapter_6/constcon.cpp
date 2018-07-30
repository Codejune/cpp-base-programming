#include <iostream>
#include <string>

class Person {
	private:
		const string SSN;
		double height;
		double weight;
	public:
		Person() {}
		Person(const string _SSN, double _height, double _weight)
			:SSN(_SSN),height(_height),weight(_weight){}
		
};
int main() {
	Person p("123456-1234567", 183.4, 78.5);
	return 0;
}
