#include <iostream>
#include "funcs.h"

int main(){
  std::cout << "Task A" << '\n';
  std::cout << "Creating vector v of n integers that range from 0 to 10" << '\n';
  std::vector<int> v = makeVector(10);
  for (int i = 0; i < v.size(); i++){
    std::cout << v[i] << " ";
  }
  std::cout << '\n';

  std::cout << "\nTask B" << '\n';
  std::vector<int> v2 {1,2,-1,3,4,-1,6};
  std::cout << "Original vector:" << '\n';
  for (int i = 0; i < v2.size(); i++){
    std::cout << v2[i] << " ";
  }
  std::cout << '\n';

  v2 = goodVibes(v2);
  std::cout << "After goodvibes(v2):" << '\n';
  for (int i = 0; i < v2.size(); i++){
    std::cout << v2[i] << " ";
  }
  std::cout << '\n';
  return 0;

  std::cout << "\nTask C" << '\n';
}
