#include <iostream>
#include <vector> // 헤더파일

int main() {
	std::vector<int> vec; // 선언
	vec.push_back(10); // 추가(삽입)
	vec.pop_back(); // 삭제(제거)

	vec.resize(10, 0); // 초기화 : 10의 크기를 0으로 채움
	vec[3] = 10; // 랜덤 접근

	std::cout << vec[3] << std::endl;
	
	// 사용법 1(랜덤 접근)
	int nSum = 0;
	for(int i = 0; i < vec.size(); i++) {
		nSum += vec[i];
	}
	
	// 사용법 2(연속 접근)
	//auto = std::iterator<std::vector<int>>
	for(auto it = vec.begin(); it != vec.end(); it++) {
		nSum += (*it);
	}
}
