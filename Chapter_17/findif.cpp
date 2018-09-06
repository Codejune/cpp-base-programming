#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> V{10, 20, 30, 40, 50};

	auto GT25 = [](int n) { 
		return n > 25;
	};

	auto itFI = std::find_if(V.begin(), V.end(), GT25);

	if(itFI != V.end()) {
		std::cout << (*itFI)  << std::endl;
	}
}

