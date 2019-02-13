#include "PathSumIII-437.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.pathSum(createTree(s1, sizeof(s1) / sizeof(int)), 1) << endl;

  int s2[] = {10, 5, -3, 3, 2, INT_MIN, 11, 3, -2, INT_MIN, 1};
  cout << s.pathSum(createTree(s2, sizeof(s2) / sizeof(int)), 8) << endl;

  return 0;
}