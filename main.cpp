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

  std::cout << "\nTask C" << '\n';
  std::vector<int> v3{1,2,3};
  std::vector<int> v4{4,5};
  std::cout << "v3: ";
  for (int i = 0; i < v3.size(); i++){
    std::cout << v3[i] << " ";
  }
  std::cout << '\n';
  std::cout << "v4: ";
  for (int i = 0; i < v4.size(); i++){
    std::cout << v4[i] << " ";
  }
  std::cout << '\n';

  gogeta(v3, v4); // v1 is now [1,2,3,4,5] and v2 is empty.
  std::cout << "v3 after gogeta(v3, v4): ";
  for (int i = 0; i < v3.size(); i++){
    std::cout << v3[i] << " ";
  }
  std::cout << '\n';


  return 0;
}
