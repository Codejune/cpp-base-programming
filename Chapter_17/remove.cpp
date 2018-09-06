#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> V{10, 20, 30, 40, 50};
	std::cout << "V.size() = " << V.size() << std::endl;

	auto itR = std::remove(V.begin(), V.end(), 40);

	if(itR != V.end()) {
		std::cout << "After remove() : " << V.size() << std::endl;
		V.erase(itR, V.end());
		std::cout << "After erase() : " << V.size() << std::endl;
	}
}
