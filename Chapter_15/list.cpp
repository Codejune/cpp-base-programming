#include <iostream>
#include <list>	// 헤더 파일

int main() {
	std::list<int> lst; // 선언
 
	lst.push_back(5); // 5
	lst.push_back(10); // 5 > 10
	lst.push_front(1); // 1 > 5 > 10

	auto it = lst.begin(); // 첫번째 위치(HEAD), it > 1 > 5 > 10
	it++; // 이동(두번째 위치), 1 > it > 5 > 10

	auto at = lst.insert(it, 2); // it 앞에 at > 2 삽입, 1 > at > 2 > it > 5 > 10
	lst.insert(at ,3); // at 앞에 3 삽입, 1 > 3 > at > 2 > it > 5 > 10
	lst.insert(it, 4); // it 앞에 4 삽입, 1 > 3 > at > 2 > 4 > it > 5 > 10

	for(auto it = lst.begin(); it != lst.end(); it++) {
		std::cout << (*it) << '\t';
	}
	std::cout << std::endl;

	std::list<int> lstB;
	lstB.push_back(20); // 20
	lstB.push_back(30); // 20 > 30

	lst.insert(it, lstB.begin(), lstB.end()); // 리스트 삽입, 1 > 3 > at > 2 > 4 > 20 > 30 > it > 5 > 10
	for(auto it = lst.begin(); it != lst.end(); it++) {
		std::cout << (*it) << '\t';
	}
}

