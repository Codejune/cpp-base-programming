#include <iostream>

int main() {
	int a = 9;
	int b = 0;
	int c = 0;

	try {
		if(b == 0) {
			throw b;
		}
		c = a / b;
		std::cout << c << std::endl;
	} catch (int divided) {
		std::cout << "Exception : Divide by " << divided << std::endl;
	}
}
