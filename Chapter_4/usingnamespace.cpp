#include <iostream>

namespace A { int i; }
namespace B { int i; }

using namespace A;
using namespace B;

int main() {
	//Don't do this
	if(i == i){}
	if(A::i == B::i){}
	return 0;
}
