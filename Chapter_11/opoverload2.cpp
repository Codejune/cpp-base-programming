#include <iostream>

class WorkHour {
	private : 
		int workHour;
	public:
		WorkHour(int w) : workHour(w){
			std::cout << "Call WorkHour(" << w << ")" << std::endl;
		}

		void printWorkHour() {
			std::cout << "WorkHour : " << workHour << std::endl;
		}

		/*
		WorkHour add(const WorkHour& work) { // 함수 구현
			WorkHour wh(this->workHour + work.workHour);
			return wh;
		}
		WorkHour operator+(const WorkHour& work) { // 연산자 오버로딩 (우측항 더하기 구현)
			WorkHour wh(this->workHour + work.workHour);
			return wh;
		}
		*/

		friend WorkHour operator+(const WorkHour& work1, const WorkHour& work2); // 좌우측 구현 함수 선언
};

WorkHour operator+(const WorkHour& work1, const WorkHour& work2) { // 연산자 오버로딩 (좌우측 구현 함수)
	WorkHour work(work1.workHour + work2.workHour);
	return work;
}

int main() {
	WorkHour Aworker(2);
	//WorkHour total = Aworker + 3; // op overloading
	WorkHour total = 3 + Aworker;
	total.printWorkHour();
}
