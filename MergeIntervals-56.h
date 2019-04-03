/**
 * https://leetcode.com/problems/merge-intervals/
 */

#include "LeetCode.h"

class Solution {
  Interval convertInterval(pair<int, int> &a) {
    return Interval(a.first, a.second);
  }

  pair<int, int> convertPair(Interval &a) { return make_pair(a.start, a.end); }

public:
  vector<Interval> merge(vector<Interval> &intervals) {
    vector<Interval> result;
    return result;
  }
};
