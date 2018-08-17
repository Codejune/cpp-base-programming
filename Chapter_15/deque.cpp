#include <iostream>
#include <deque> // 헤더 파일

int main() {
	std::deque<int> deq; // 선언
	deq.push_back(10); // 뒤에 추가
	deq.pop_back(); // 뒤에 삭제

	deq.push_front(20); // 앞에 추가
	deq.pop_front(); // 앞에 삭제

	deq.resize(10, 0); // 초기화 : 10의 크기만큼 0으로 채움

	deq[3] = 10;

	std::cout << deq[3] << std::endl;

	int nSum = 0;
	for(int i = 0; i < deq.size(); i++) {
		nSum += deq[i];
	}

	//auto = std::iterator<std::deque<int>> (반복자)
	for(auto it = deq.begin(); it != deq.end(); it++) {
		nSum += (*it);
	}
}
