#include <iostream>

Person& operator = (const Person& rhs) {
	if(this == &rhs)
		return *this;

	height = rhs.height;
	weight = rhs.weight;

	return *this;
}

int main() {
	Person p1(183.4, 78.5), p2(175.6, 68.3);
	p1 = p2;
}
