/**
 * https://leetcode.com/problems/combination-sum-ii/
 */

#include "LeetCode.h"

class Solution {
  vector<vector<int>> result_;
  vector<int> candidates_;
  int target_;

  bool exist(const vector<int> &t) {
    for (int i = 0; i < result_.size(); i++) {
      if (result_[i] == t) {
        return true;
      }
    }
    return false;
  }

  int getSum(vector<int> &s) {
    int sum = 0;
    for (int i = 0; i < s.size(); i++) {
      sum += s[i];
    }
    return sum;
  }

  void comb(vector<int> &s, int p) {
    int sum = getSum(s);
    if (sum >= target_) {
      vector<int> cp(s);
      sort(cp.begin(), cp.end());
      if (sum == target_ && !exist(cp)) {
        result_.push_back(cp);
      }
      return;
    }

    for (int i = p; i < candidates_.size(); i++) {
      if (getSum(s) > target_) {
        break;
      }
      s.push_back(candidates_[i]);
      comb(s, i + 1);
      while (i + 1 < candidates_.size() && !s.empty() &&
             s.back() == candidates_[i + 1])
        i++;
      s.pop_back();
    }
  }

public:
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    result_.clear();
    sort(candidates.begin(), candidates.end());
    candidates_ = candidates;
    target_ = target;
    vector<int> tmp;
    comb(tmp, 0);
    return result_;
  }
};
