#include <iostream>

float Max(float a, float b) {
//int Max(int a, int b) {
	return a > b ? a : b;
}

int main() {
	int nA = 300;
	int nB = 400;
	int nC = Max(nA, nB);
	std::cout << "Max (300, 400) = " << nC << std::endl;

	float fD = 15.1f;
	float fE = 15.3f;
	float fF = Max(fD, fE);
	std::cout << "Max (15.1, 15.3) = " << fF << std::endl;
}
