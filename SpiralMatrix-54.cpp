#include "SpiralMatrix-54.h"

int main(void) {
  Solution s;

  vector<vector<int>> v1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  dumpVector(s.spiralOrder(v1));

  vector<vector<int>> v2 = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
  dumpVector(s.spiralOrder(v2));

  vector<vector<int>> v3 = {};
  dumpVector(s.spiralOrder(v3));

  return 0;
}
