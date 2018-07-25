#include <iostream>
int main() {
	int* p1 = new int;
	delete p1;
	p1 = nullptr;

	int* p2 = new int[10];
	delete[] p2;
	p2 = nullptr;
	return 0;
}
