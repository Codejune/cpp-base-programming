// DataBase.cpp

#include <iostream>
#include <stdexcept> 
#include "DataBase.h"

using namespace std;

namespace Records {
	DataBase::DataBase() { // 생성자
		mNextEmployeeNumber = kFirstEmployeeNumber;
	}

	DataBase::~DataBase() { // 소멸자
	}

	Employee& DataBase::addEmployee(std::string inFirstName, std::string inLastName) {
		Employee theEmployee;
		theEmployee.setFirstName(inFirstName); // 성 지정
		theEmployee.setLastName(inLastName); // 이름 지정
		theEmployee.setEmployeeNumber(mNextEmployeeNumber++); // 종업원 번호 지정 (다음 종업원은 +1)
		theEmployee.hire(); // 고용여부 지정

		mEmployees.push_back(theEmployee); // 데이터베이스에 추가(push_back : 벡터에 데이터 추가)

		return mEmployees[mEmployees.size() - 1]; // 추가한 종업원 객체 반환
	}

	Employee& DataBase::getEmployee(int inEmployeeNumber) { // 종업원 번호로 조회
		for(auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) { // begin : 벡터의 시작(첫번째 위치), end : 벡터의 마지막 다음 위치
			if(iter->getEmployeeNumber() == inEmployeeNumber) {
				return *iter; // iter = 포인터 (*을 붙이면 다시 값이 됨)
			}
		}
		cerr << "No Employee with Number " << inEmployeeNumber << endl; // cerr : 에러 구문 출력
		throw exception(); // 예외처리
	}

	Employee& DataBase::getEmployee(std::string inFirstName, std::string inLastName) {
		for(auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
			if(iter->getFirstName() == inFirstName && iter->getLastName() == inLastName) {
				return *iter;
			}
		}
		cerr << "No Employee with FirstName " << inFirstName << ", LastName " << inLastName << endl;
		throw exception(); // 예외처리
	}

	void DataBase::displayAll() const {
		for(auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
			iter->display();
		}
	}

	void DataBase::displayCurrent() const {
		for(auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
			if(iter->getIsHired()) {
				iter->display();
			}
		}
	}

	void DataBase::displayFormer() const {
		for(auto iter = mEmployees.begin(); iter != mEmployees.end(); ++iter) {
			if(!(iter->getIsHired())) {
				iter->display();
			}
		}
	}
}



