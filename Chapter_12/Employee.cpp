// Employee.cpp
// Employee.h 의 구현부

#include <iostream>
#include "Employee.h"

using namespace std;

namespace Records {
	Employee::Employee() : mFirstName(""), mLastName(""), mEmployeeNumber(-1), mSalary(kDefaultStartingSalary), bHired(false){} // 생성자 (멤버 이니셜라이저 이용)
	
	void Employee::promote(int inRaiseAmount) {
		setSalary(getSalary() + inRaiseAmount); // 현재 봉급 + 추가 봉급
	}

	void Employee::demote(int inDemeritAmount) {
		setSalary(getSalary() - inDemeritAmount); // 현재 봉급 - 감봉 봉급
	}

	void Employee::hire() {
		bHired = true;
	}

	void Employee::fire() {
		bHired = false;
	}
	
	void Employee::display() const {
		cout << "Employee : " << getFirstName() << ", " << getLastName() << endl;
		cout << "--------------------------------" << endl;
		cout << (bHired ? "Current Employee" : "Former Employee") << endl; // 고용 ? 참 : 거짓
		cout << "Employee Number : " << getEmployeeNumber() << endl;
		cout << "Salary : $" << getSalary() << endl;
		cout << endl;
	}

	void Employee::setFirstName(std::string inFirstName) {
		mFirstName = inFirstName;
	}
	string Employee::getFirstName() const{
		return mFirstName;
	}

	void Employee::setLastName(std::string inLastName) {
		mLastName = inLastName;
	}
	std::string Employee::getLastName() const {
		return mLastName;
	}

	void Employee::setEmployeeNumber(int inEmployeeNumber) {
		mEmployeeNumber = inEmployeeNumber;
	}
	int Employee::getEmployeeNumber() const {
		return mEmployeeNumber;
	}

	void Employee::setSalary(int inNewSalary) {
		mSalary = inNewSalary;
	}
	int Employee::getSalary() const {
		return mSalary;
	}

	bool Employee::getIsHired() const {
		return bHired;
	}
}
