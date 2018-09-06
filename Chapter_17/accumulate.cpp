#include <iostream>
#include <vector>
#include <numeric>

int main() {
	std::vector<int> V{1, 2, 3, 4};

	int nSum = std::accumulate(V.begin(), V.end(), 0); // V의 합
	int nSum10 = std::accumulate(V.begin(), V.end(), 10); // 10 + v의 합

	auto multi = [](int a, int b) {
		return a * b;
	};
	int nMulti = std::accumulate(V.begin(), V.end(), 1, multi); // 인자의 곱

	auto nSqure = [](int a, int b) {
		return a + b * b;
	};
	int nSumSqure = std::accumulate(V.begin(), V.end(), 0, nSqure); // 제곱의 합

	std::cout << nSum << '\t' << nSum10 << '\t' << nMulti << '\t' << nSumSqure << std::endl;
}
