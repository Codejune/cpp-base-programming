#include <iostream>

template <typename T>
T Divide(T a, T b) {
	if(b == 0) {
		throw b;
	}
	return a/b;
}
int main() {
	int a = 9;
	int b = 0;
	int c = 0;

	try {
		c = Divide<int>(a, b);
		std::cout << c << std::endl;
	} catch (int divided) {
		std::cout << "Exception : Divide by " << divided << std::endl;
	}
}

