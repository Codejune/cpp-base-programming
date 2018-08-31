#include <iostream>

int main() {
	std::pair<int, double> P(10, 15.5); // 생성하면서 할당
	auto P2 = std::make_pair<int, double>(50, 55.5); // make_pair 사용
	P2.second = 100;
	std::cout << P.first << ',' << P.second << std::endl;
	std::cout << P2.first << ',' << P2.second << std::endl;
}
