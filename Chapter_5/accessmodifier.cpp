#include <iostream>

class Parent {
	private :
		int priv;
	protected:
		int prot;
	public:
		int pub;
		void AccessAllMembers();
};

void Parent::AccessAllMembers() {
	priv = 100; // Success
	prot = 100; // Success
	pub = 100;  // Success
};

class Child : public Parent {
	public :
		void AccessParents() {
			int n;
			n = priv; // Fail
			n = prot; // Success
			n = pub;  // Success
		}
};

int main() {
	Parent parent;
	int n;
	n = parent.priv; // Fail
	n = parent.prot; // Fail
	n = parent.pub;  // Success
	return 0;
}
