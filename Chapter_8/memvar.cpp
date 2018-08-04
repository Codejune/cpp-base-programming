#include <iostream>

class Vault {
	private : 
		int money;
	public:
		Vault(int _money) : money(_money) {}
};

class Bank {
	private :
		static double interestRate;
		const Vault& vault;
		int width, height;
	public:
		static const int kMaxWidth = 300;
		static const int kMaxHeight = 300;

		Bank(const Vault& _vault, int _width, int _height);
		Bank(const Bank& src);
};

double Bank::interestRate = 3.5;

Bank::Bank(const Vault& _vault, int _width, int _height) : vault(_vault), width(_width), height(_height) {}

Bank::Bank(const Bank& src) : vault(src.vault), width(src.width), height(src.height) {}

int main() {
	Vault daeguVault(200'000'000);
	Bank daeguBank(daeguVault, 50, 50);
	return 0;
}
