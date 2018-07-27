#include <iostream>

struct Elephant {
	[public:]
		int FootNumber;
		double noseLength;
		double weight;

		void wash() {
			std::cout << "Wash\n";
		}
		void pick() {
			std::cout << "Pick\n";
		}
};

int main() {
	Elephant e = {4, 4.96, 1.02};
	e.wash();
	e.pick();
	return 0;
}
