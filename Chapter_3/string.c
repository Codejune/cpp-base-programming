#include <stdio.h>
int main() {
	char str1[30] = "Hello, World";
	char* str2 = "Hello, Word";

	if(strcmp(str1, str2) == 0)
		printf("Same!\n");
	else
		printf("Different!\n");

	strcat(str1, str2);
	printf("%s\n", str1);
	printf("%d, %d\n", strlen(str1), strlen(str2));
	return 0;
}
