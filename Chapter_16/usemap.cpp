#include <iostream>
#include <map> // 헤더 파일
#include <vector>

int main() {

  std::map<std::string, std::vector<int>> MSV;
  auto it = MSV.find("sss"); // it는 vector를 가르킴
  if(it->second.empty()) {
    // 없을경우
  }

  it->second.push_back(10); // 있을경우 값 입력
  std::vector<int> & V = it->asecond;

  for(auto IT = V.begin(0; IT != V.end(); IT++) { // 해당되는 키의 모든 value값을 찾을때
    
  }
}
