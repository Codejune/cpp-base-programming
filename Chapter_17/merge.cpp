#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>
#include <functional>

int main() {
	std::vector<int> V {10, 30, 15, 50, 45};
	std::sort(V.begin(), V.end(), std::less<int>()); // less = 오름차순

	std::deque<int> V2 {13, 78, 57, 24, 69};
	std::sort(V2.begin(), V2.end(), std::less<int>());

	std::vector<int> VR; // 2개의 컨테이너를 합친 정렬된 컨테이너
	VR.resize(V.size() + V2.size()); // 컨테이너의 사이즈 결정

	auto isLess = [](int a, int b) { // 람다식, 정렬기준 조건문
		return a < b;
	};

	std::merge(V.begin(), V.end(), V2.begin(), V2.end(), VR.begin(), std::less<int>());
	//std::merge(V.begin(), V.end(), V2.begin(), V2.end(), VR.begin(), isLess);
	for(auto it = VR.begin(); it != VR.end(); it++) {
		std::cout << (*it) << '\t';
	}
	std::cout << std::endl;
}
