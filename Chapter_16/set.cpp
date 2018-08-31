#include <iostream>
#include <set>

int main() {
  std::set<int> S{9, 7, 5, 1, 3};
  S.insert(4); // 1, 3, 4, 5, 7, 9
  for(auto it = S.begin(); it != S.end(); it++) {
    std::cout << (*it) << '\t';
  }
  std::cout << std::endl;

  auto f = S.find(5);
  if(f != S.end()) {
    std::cout << "Found!" << std::endl;
  }
}
