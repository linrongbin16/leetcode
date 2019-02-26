/**
 * https://leetcode.com/problems/combination-sum-iii/
 */

#include "LeetCode.h"

class Solution {
  vector<vector<int>> result_;
  vector<int> cand_;
  int n_;
  int k_;

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
    if (sum >= n_) {
      if (sum == n_) {
        vector<int> cp(s);
        sort(cp.begin(), cp.end());
        if (cp.size() == k_ && !exist(cp)) {
          result_.push_back(cp);
        }
      }
      return;
    }
    for (int i = p; i < 9; i++) {
      s.push_back(cand_[i]);
      comb(s, i + 1);
      s.pop_back();
    }
  }

public:
  vector<vector<int>> combinationSum3(int k, int n) {
    result_.clear();
    cand_.clear();
    for (int i = 1; i <= 9; i++) {
      cand_.push_back(i);
    }
    n_ = n;
    k_ = k;
    vector<int> tmp;
    comb(tmp, 0);
    return result_;
  }
};
