#include <iostream>
#include <vector>

std::vector<int> makeVector(int n){
    std::vector<int> v;
    for (int i = 0; i < n; i++){
      v.push_back(i);
    }
    return v;
}

std::vector<int> goodVibes(const std::vector<int> &v){
  std::vector<int> happyv;
  for (int i = 0; i < v.size(); i++){
    if (v[i] > 0){
      happyv.push_back(v[i]);
    }
  }
  return happyv;
}
