#include "MergeIntervals-56.h"

int main(void) {
  Solution s;

  vector<Interval> v1 = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
  dumpVector(s.merge(v1));

  vector<Interval> v2 = {{1, 4}, {4, 5}};
  dumpVector(s.merge(v2));

  return 0;
}
