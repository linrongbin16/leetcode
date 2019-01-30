#include "ContainerWithMostWater-11.h"

int main(void) {
  Solution s;

  vector<int> t1 = {1, 8, 6, 2, 5, 4, 8, 3, 7};
  cout << s.maxArea(t1) << endl;
  vector<int> t2 = {1, 8, 6};
  cout << s.maxArea(t2) << endl;
  return 0;
}

