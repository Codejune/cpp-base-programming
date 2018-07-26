#include <iostream>
int main() {
	enum class TrafficLight { Red, Yellow, Green };
	enum class Job { Warrior, Ranger, Wizard, Green};
	enum class Coffee : unsigned char { Latte = 10, Mocha = 25 };

	Job jobNum = Job::Warrior;
	int i = static_cast<int>(TrafficLight::Green) + static_cast<int>(Coffee::Latte);
/*
	if(TrafficLight::Yellow == Job::Ranger)
		std::cout << "Same!" << std::endl;
	else
		std::cout << "Different!" << std::endl;
*/
	return 0;
}
