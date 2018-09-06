#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

int main() {
	std::vector<int> V{10, 30, 15, 50, 45};

	for(auto it = V.begin(); it != V.end(); it++) {
		std::cout << (*it) << '\t';
	}
	std::cout << std::endl;

	std::sort(V.begin(), V.end(), std::less<int>());

	for(auto it = V.begin(); it != V.end(); it++) {
		std::cout << (*it) << '\t';
	}
	std::cout << std::endl;
}
