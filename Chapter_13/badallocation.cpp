#include <iostream>
#include <new>

int main() {
	char* ptr;
	try {
		int s = (unsigned int((int)0 / 2) - 1;
		ptr = new char[s];
		delete[] ptr;
	} catch(std::bad_alloc &ba) {
		std::cout << ba.what() << std::endl;
	}
}
