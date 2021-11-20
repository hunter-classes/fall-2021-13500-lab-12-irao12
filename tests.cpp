#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include <vector>

TEST_CASE("Testing makeVector"){
  std::vector<int> v = makeVector(10);
  CHECK(v.size() == 10);
  for (int i = 0; i < v.size(); i++){
      CHECK(v[i] == i);
  }
  v = makeVector(20);
  CHECK(v.size() == 20);
  for (int i = 0; i < v.size(); i++){
    CHECK(v[i] == i);
  }
}

TEST_CASE("Testing goodVibes"){
  std::vector<int> v2 {1,2,-1,3,4,-1,6};
  v2 = goodVibes(v2);
  CHECK(v2.size() == 5);
  CHECK(v2[0] == 1);
  CHECK(v2[1] == 2);
  CHECK(v2[2] == 3);
  CHECK(v2[3] == 4);
  CHECK(v2[4] == 6);
  std::vector<int> v3 {12, 3, 4, 0, -23, -32, 2};
  v3 = goodVibes(v3);
  CHECK(v3.size() == 4);
  CHECK(v3[0] == 12);
  CHECK(v3[1] == 3);
  CHECK(v3[2] == 4);
  CHECK(v3[3] == 2);
}
