#include "PathSumII-113.h"

int main(void) {
  Solution s;

  int s1[] = {5, 4,       8,       11,      INT_MIN, 13, 4, 7,
              2, INT_MIN, INT_MIN, INT_MIN, INT_MIN, 5,  1};
  dumpVector2D(s.pathSum(createTree(s1, sizeof(s1) / sizeof(int)), 22));
  return 0;
}
