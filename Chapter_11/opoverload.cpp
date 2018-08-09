#include <iostream>

class WorkHour {
	private : 
		int workHour;
	public:
		WorkHour(int w) : workHour(w){}

		void printWorkHour() {
			std::cout << "WorkHour : " << workHour << std::endl;
		}

		WorkHour add(const WorkHour& work) {
			WorkHour wh(this->workHour + work.workHour);
			return wh;
		}

		WorkHour operator+(const WorkHour& work) {
			WorkHour wh(this->workHour + work.workHour);
			return wh;
		}
};

int main() {
	WorkHour Aworker(2);
	WorkHour Bworker(3);
	//WorkHour total = Aworker.add(Bworker); // none op oveloading
	WorkHour total = Aworker + Bworker; // op overloading
	total.printWorkHour();
}
