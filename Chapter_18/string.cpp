#include <iostream>
#include <string>

int main() {

	/*
	 * 생성
	 */
	std::string str("Hello!"); // 기본 생성형태
	const char* p1 = "Hello!"; // C의 형태
	const char* p2 = p1 + 6;

	std::string s1; // 빈 스트링
	std::string s2("Hello!"); // 직접 입력
	std::string s3("Hello!", 2); // He(2개만 가짐)
	std::string s4(5, 'H'); // HHHHH
	std::string s5(str.begin(), str.end()); // Hello!
	std::string s6(p1, p2); // Hello!

	/*
	 * 문자열 붙이기
	 */

	std::string s7("Hello!");
	s7 += ' ';
	s7 += "C++";
	s7.push_back(' ');
	s7.append("world");
	std::cout << s7 << std::endl; // Hello! C++ world

	/*
	 * char로 변환
	 */

	std::string s8("Hello!");
	const char *sz;

	sz = s8.c_str();

	std::cout << "sz : " << sz << std::endl;
}
