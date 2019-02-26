#include "SetMatrixZeroes-73.h"

int main(void) {
  Solution s;

  vector<vector<int>> m1 = {{1, 1, 1}, {1, 0, 1}, {1, 1, 1}};
  s.setZeroes(m1);
  dumpVector2D(m1);

  vector<vector<int>> m2 = {{0, 1, 2, 0}, {3, 4, 5, 2}, {1, 3, 1, 5}};
  s.setZeroes(m2);
  dumpVector2D(m2);

  return 0;
}
