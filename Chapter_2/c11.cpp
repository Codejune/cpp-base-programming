#include <iostream>
int main() {
	int arr[] = {1,2, 3, 4,5};
	for(auto& i : arr)
		std::cout << i << std::endl;
	return 0;
}
