#include <iostream>

template <typename T, int VAL>
class Data {
	T data;
	public:
	Data(T d) {
		data = d + VAL;
	}
	void SetData(T d) {
		data = d;
	}
	T GetData() {
		return data;
	}
};

int main() {
	Data<int, 30> D(10);
	std::cout << D.GetData() << std::endl;
}
