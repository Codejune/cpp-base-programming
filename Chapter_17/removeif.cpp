#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	std::vector<int> V{10, 15, 30, 45, 50};

	auto isOdd = [](int n) { // 람다식 사용
		return n % 2 == 1;
	};

	auto itRI = std::remove_if(V.begin(), V.end(), isOdd);

	if(itRI != V.end()) {
		std::cout << "After remove_if() : " << V.size() << std::endl;
		V.erase(itRI, V.end());
		std::cout << "After erase() : " << V.size() << std::endl;
	}
}
