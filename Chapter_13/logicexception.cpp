#include <iostream>

int main() {
	int a = 9;
	int b = 0;
	int c = 0;
	//int c = a / b;
	
	if(b != 0) {
		c = a / b;
		std::cout << c << std::endl;
	} else {
		std::cout << "Exception : Divide by Zero" << std::endl;
	}
	//std::cout << c << std::endl;
}
