// Employee.h

#include <string>

namespace Records {
	const int kDefaultStartingSalary = 30000; // 직원의 최초 급여

	class Employee {
		public:
			Employee(); // 생성자
			void promote(int inRaiseAmount = 1000); // 승진시 급여 상승 함수 (기본 : 1000)
			void demote(int inDemeritAmount = 1000); // 징계시 급여 하락 함수 (기본 : 1000)
			void hire(); // 고용 함수
			void fire(); // 해고 함수
			void display() const; // 정보 출력 함수 (값 수정이 없음으로 const 메서드로 지정)

			void setFirstName(std::string inFirstName); // 성  Setter
			std::string getFirstName() const; // 성 Getter
			void setLastName(std::string inLastName); // 이름 Setter
			std::string getLastName() const; // 이름 Getter

			void setEmployeeNumber(int inEmployeeNumber); // 종업원 수 Setter
			int getEmployeeNumber() const; // 종업원 수 Getter

			void setSalary(int inNewSalary); // 봉급 Setter
			int getSalary() const; // 봉급 Getter

			bool getIsHired() const; // 종업원의 고용 여부 반환 함수
		protected :
			std::string mFirstName; // 성
			std::string mLastName; // 이름
			int mEmployeeNumber; // 종업원 수
			int mSalary; // 급여
			bool bHired; // 고용여부
	};
}


