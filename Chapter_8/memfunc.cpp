#include <iostream>
#include <string>

class Vault {
	private : 
		int money;
	public:
		vault(int _money) : money(_money){}
};

class Bank {
	private :
		static double interestRate;
		const Vault& vault;
		int width, height;
		string branchName;
	public:
		static const int kMaxWidth = 300;
		static const int kMaxHeight = 300;
		Bank(const Vault& _vault, int _width, int _height);
		Bank(const Bank& src);
		static int roundDown(double val);
		string getBranchName() const;
		void setBranchName(string _bName);
};

double Bank::interestRate = 3.5;

Bank::Bank(const Vault& _vault, int _width, int _height) : vault(_vault), height(_height), width(_width){}

Bank::Bank(const Bank& src) : vault(src.vault), width(src.width), height(src.height){}

Bank::Bank(const Vault& _vault, int _width = kMaxWidth, int _height = kMaxHeight) : vault(_vault), width(_width), height(_height){}

int Bank::roundDown(double val) {
	return static_cast<int>(val);
}

string Bank::getBranchName() const {
	return branchName;
}

void Bank::SetBranchName(string _bName) {
	branchName = _bName;
}

int main() {
	Vault daeguVault(200'000'000);

	Bank b1(daeguVault);
	Bank b2(daeguVault, 50);
	Bank b3(daeguVault, 50, 50);

	Bank daeguBank(daeguVault, 50, 50);
	daeguBank.setBranchName("Daegu");
	std::cout << daeguBank.getBranchName();
	std::cout << std::endl;
	std::cout << Bank::roundDown(3.4);
	std::cout << std::endl;
	return 0;
}
