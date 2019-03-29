#include "PermutationsII-47.h"

int main(void) {
  Solution s;

  vector<int> v1 = {1, 2, 3};
  dumpVector2D(s.permuteUnique(v1));

  vector<int> v2 = {1, 1, 2, 3};
  dumpVector2D(s.permuteUnique(v2));

  vector<int> v3 = {1, 1, 1, 2, 3, 3};
  dumpVector2D(s.permuteUnique(v3));

  return 0;
}
