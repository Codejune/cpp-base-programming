#include <iostream>

class WorkHour {
	private : 
		int workHour;
	public:
		WorkHour(int w) : workHour(w){
		}

		void printWorkHour() {
			std::cout << "WorkHour : " << workHour << std::endl;
		}

		WorkHour operator+(const WorkHour& work) { // 연산자 오버로딩 (우측항 더하기 구현)
			WorkHour wh(this->workHour + work.workHour);
			std::cout << "operator+(work)" << std::endl;
			return wh;
		}

		friend WorkHour operator+(const WorkHour& work1, const WorkHour& work2); // 좌우측 구현 함수 선언
};

WorkHour operator+(const WorkHour& work1, const WorkHour& work2) { // 연산자 오버로딩 (좌우측 구현 함수)
	WorkHour work(work1.workHour + work2.workHour);
	std::cout << "operator+(work1, work2);" << std::endl;
	return work;
}

int main() {
	WorkHour Aworker(2);
	WorkHour Bworker(3);
	WorkHour total1 = Aworker + 3; 
	WorkHour total2 = 3 + Bworker;
	total1.printWorkHour();
	total2.printWorkHour();
}
