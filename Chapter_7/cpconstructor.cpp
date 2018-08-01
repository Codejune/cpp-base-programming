#include <iostream>

//1
Person(const Person& src)
	: height(src.height), weight(src.weight){}
//2
Person(const Person& src) {
	height = src.height;
	weight = src.weigth;
}

int main() {
	Person p1(183.4, 78.5);
	Person p2(p1);
	return 0;
}
