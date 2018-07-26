#include <iostream>
#include <string>

int main() {
	std::string str1 = "Hello, World";
	std::string str2 = "Hello, Word";
	if(str1 == str2)
	       std::cout << "Same!" << std::endl;
	else
		std::cout << "Different!" << std::endl;	
	str1 = str1 + str2;
	std::cout << str1 << std::endl;
	std::cout << str1.size() << ' ' << str2.length() << std::endl;
	return 0;
}
