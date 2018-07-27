#include "stdio.h"

typedef struct Elephant {
	int FootNumber;
	double noseLength;
	double weight;
} Elephant;

void wash() {
	printf("Wash\n");
}

void pick() {
	printf("Pick\n");
}

int main() {
	Elephant e = {4, 4.96, 1.02};
	wash();
	pick();
	return 0;
}
