// DataBase.h

#include <iostream>
#include <vector> // 벡터 헤더 파일
#include "Employee.h"

namespace Records {
	const int kFirstEmployeeNumber = 1000; // 최초 종업원 번호

	class DataBase {
		public :
			DataBase(); // 생성자
			~DataBase(); // 소멸자
			Employee& addEmployee(std::string inFirstName, std::string inLastName); // 종업원 추가
			// 함수 오버로딩
			Employee& getEmployee(int inEmployeeNumber); // 종업원 번호로 검색
			Employee& getEmployee(std::string inFirstName, std::string inLastName); // 종업원 이름으로 검색
			void displayAll() const; // 전체 종업원 출력
			void displayCurrent() const; // 현재 종업원 출력
			void displayFormer() const; // 과거 종업원 출력

		protected : // 데이터
			std::vector<Employee> mEmployees;
			int mNextEmployeeNumber; // 새로운 종업원에게 할당할 번호
	};
}
