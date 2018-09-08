#include <iostream>
#include <queue>

using namespace std;

int main() {
	queue<int> qu; // std::queue

	qu.push(1);
	qu.push(2);
	qu.push(3);

	int count = qu.size();
	for(int i = 0; i < count; i++) {
		std::cout << qu.front() << std::endl;
		qu.pop();
	}
}
