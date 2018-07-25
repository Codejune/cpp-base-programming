#include <iostream>
int main() {
	int* p1 = new int;
	delete p1;
	p1 = NULL;

	int* p2 = new int[10];
	delete[] p2;
	p2 = NULL;
	return 0;
}
