#include "RotateImage-48.h"

int main(void) {
  Solution s;

  vector<vector<int>> m1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  dumpVector2D(m1);
  s.rotate(m1);
  dumpVector2D(m1);

  vector<vector<int>> m2 = {
      {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, {15, 14, 12, 16}};
  dumpVector2D(m2);
  s.rotate(m2);
  dumpVector2D(m2);

  return 0;
}
