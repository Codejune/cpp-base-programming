// UserInterface.cpp
// 사용자 메뉴

#include <iostream>
#include <stdexcept>
#include "DataBase.h"

using namespace std;
using namespace Records;

int displayMenu(); // 메뉴 출력 함수
void doHire(DataBase& inDB); // 고용 함수
void doFire(DataBase& inDB); // 해고 함수
void doPromote(DataBase& inDB); // 승진 함수
void doDemote(DataBase& inDB); // 징계 함수

int main() {
	DataBase employeeDB; // 데이터베이스 객체 선언
	bool done = false; // 
	while(!done) {
		int selection = displayMenu(); // displayMenu로부터 반환된 값
		
		switch(selection) {
			case 1:
				doHire(employeeDB);
				break;
			case 2:
				doFire(employeeDB);
				break;
			case 3:
				doPromote(employeeDB);
				break;
			case 4:
				doDemote(employeeDB);
				break;
			case 5:
				employeeDB.displayAll();
				break;
			case 6:
				employeeDB.displayCurrent();
				break;
			case 7:
				employeeDB.displayFormer();
				break;
			case 0:
				done = true;
				break;
			default:
				cerr << "Unknown command." << endl;
		}
	}
	return 0;
}

int displayMenu() {
	int selection;
	
	cout << endl;
	cout << "Employee DataBase" << endl;
	cout << "-----------------" << endl;
	cout << "1. Hire a new Employee" << endl;
	cout << "2. Fire an Employee" << endl;
	cout << "3. Promote an Employee" << endl;
	cout << "4. Demote an Employee" << endl;
	cout << "5. List All Employees" << endl;
	cout << "6. List All Current Employees" << endl;
	cout << "7. List All Previous Employees" << endl;
	cout << "0. Exit" << endl;
	cout << endl;
	cout << "---> ";
	cin >> selection;
	return selection;
}

void doHire(DataBase& inDB) {
	string firstName;
	string lastName;

	cout << "First Name : ";
	cin >> firstName;
	cout << "Last Name : ";
	cin >> lastName;

	try { // 예외 처리
		inDB.addEmployee(firstName, lastName); // DataBase에 종업원 추가
	} catch(const std::exception&) { // 추가 실패시
		cerr << "Unable to add new Employee!" << endl;
	}
}

void doFire(DataBase& inDB) {
	int employeeNumber;

	cout << "Employee Number : ";
	cin >> employeeNumber;

	try { // 예외 처리
		Employee& emp = inDB.getEmployee(employeeNumber); // 종업원 번호를 이용한 조회 및 객체 가져오기
		emp.fire(); // 해고 처리
		cout << "Employee " << employeeNumber << " terminate." << endl;
	} catch(const std::exception&) {
		cerr << "Unable to terminate Employee!" << endl;
	}
}

void doPromote(DataBase& inDB) {
	int employeeNumber;
	int raiseAmount;
	cout << "Employee Number : ";
	cin >> employeeNumber;
	cout << "How much of a raise : ";
	cin >> raiseAmount;

	try { // 예외 처리
		Employee& emp = inDB.getEmployee(employeeNumber); // 종업원 번호를 이용한 조회 및 객체 가져오기
		emp.promote(raiseAmount); // 급여 상승
	} catch(std::exception) {
		cerr << "Unable to promote Employee!" << endl;
	}
}

void doDemote(DataBase& inDB) {
	int employeeNumber;
	int downAmount;
	cout << "Employee Number : ";
	cin >> employeeNumber;
	cout << "How much of a down : ";
	cin >> downAmount;

	try { // 예외 처리
		Employee& emp = inDB.getEmployee(employeeNumber); // 종업원 번호를 이용한 조회 및 객체 가져오기
		emp.demote(downAmount); // 급여 감봉
	} catch(std::exception) {
		cerr << "Unable to demote Employee!" << endl;
	}
}


