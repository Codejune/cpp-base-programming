#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int> st; // std::stack

	st.push(1);
	st.push(2);
	st.push(3);

	int count = st.size();
	for(int i = 0; i < count; i++) {
		cout << st.top() << endl;
		st.pop();
	}
}
