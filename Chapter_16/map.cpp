#include <iostream>
#include <map> // 헤더 파일

int main() {

	std::map<int, int> M{{8, 32}, {11, 123}}; // Initializer_list 사용법
	//std::multimap<int, int> M{{8, 32}, {11, 123}};
	//std::unordered_map<int, int> M{{8, 32}, {11, 123}};
    //std::hash_unordered_multimap<int, int> M{{8, 32}, {11, 123}};

	M.insert(std::make_pair<int, int>(5, 100));
	M.insert(std::pair<int, int>(7, 14));
	M.insert({3, 50}); // 이니셜라이저_리스트 사용
	M.insert({3, 34}); // 중복된 key 저장 x

	int d = M[7]; // 14

	std::cout << "M[7] = " << M[7] << std::endl;
	for(auto it = M.begin(); it != M.end(); it++) {
		std::cout << "(" << it->first << "," << it->second << ")" << std::endl;
	}
}
