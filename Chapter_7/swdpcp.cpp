#include <iostream>

class Person {
	private:
		int* root;
		int roomNum;
		double height;
		double weight;
	public:
		Person() {}
		Person(int _roonNum, double _height, double _weight) : roomNum(_roomNum), height(_height), weight(_weight) {
				room = new int[roomNum];
		}
		~Person() {
			delete[] room;
		}
};

int main() {
	Person p1(3, 183.4, 78.5);
	Person p2(5, 175.6, 68.3);
	p1 = p2;
}
