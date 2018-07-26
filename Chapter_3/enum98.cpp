#include <iostream>
int main() {
	enum TrafficLight { Red, Yellow, Green };
	enum Job { Warrior, Ranger, Wizard, /*Green */};
	enum Coffee : unsigned char { Latte = 10, Mocha = 25 };

	int jobNum = Warrior;
	int i = Green + Latte;

	if(Yellow == Ranger)
		std::cout << "Same!" << std::endl;
	else
		std::cout << "Different!" << std::endl;
	return 0;
}
