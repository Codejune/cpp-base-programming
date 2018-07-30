#include <iostream>

class IntPointer {
	private:
		int* pi;
	public:
		IntPointer() {
			pi = new int[5];
		}

		~IntPointer() {
			delete[] pi;
			pi = nullptr;
		}
};
