/**
 * https://leetcode.com/problems/merge-intervals/
 */

#include "LeetCode.h"

class Solution {
  bool conflict(Interval &a, Interval &b) {
    return a.end >= b.start || a.start <= b.end;
  }

  pair<bool, vector<Interval>> mergeImpl(vector<Interval> &intervals, int p) {
    for (int i = 0; i < intervals.size(); i++) {
      if (conflict(intervals[i], intervals[p])) {
        vector<Interval> result;
        for (int j = 0; j < intervals.size(); j++) {
          if (j != i && j != p) {
            result.push_back(intervals[j]);
          }
        }
        int start = min(intervals[i].start, intervals[p].start);
        int end = min(intervals[i].end, intervals[p].end);
        result.push_back(Interval(start, end));
        return make_pair(true, result);
      }
    }
    return make_pair(false, vector<Interval>());
  }

  pair<int, int> search(vector<Interval> &intervals) {
    for (int i = 0; i < intervals.size(); i++) {
      for (int j = i + 1; j < intervals.size(); j++) {
        if (conflict(intervals[i], intervals[j])) {
          return make_pair(i, j);
        }
      }
    }
    return make_pair(-1, -1);
  }

  vector<Interval> reduce(vector<Interval> &intervals, int x, int y) {
    vector<Interval> result;
    for (int i = 0; i < intervals.size(); i++) {
      if (i != x && i != y) {
        result.push_back(intervals[i]);
      }
    }
    int start = min(intervals[x].start, intervals[y].start);
    int end = max(intervals[x].end, intervals[y].end);
    result.push_back(Interval(start, end));
    return result;
  }

public:
  vector<Interval> merge(vector<Interval> &intervals) {
    while (true) {
      pair<int, int> t = search(intervals);
      if (t.first < 0 || t.second < 0) {
        break;
      }
      intervals = reduce(intervals, t.first, t.second);
    }
    return intervals;
  }
};
