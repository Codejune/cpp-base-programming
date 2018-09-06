#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> V{10, 20, 30, 40, 50};

	auto it30 = std::find(V.begin(), V.end(), 30);
	auto it25 = std::find(V.begin(), V.end(), 25);

	if(it30 != V.end()) {
		std::cout << "Find 30!" << std::endl;
	}

	if(it25 != V.end()) {
		std::cout << "Find 25!" << std::endl;
	}
}

