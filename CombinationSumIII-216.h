/**
 * https://leetcode.com/problems/combination-sum-iii/
 */

#include "LeetCode.h"

class Solution {
  vector<vector<int>> result_;
  vector<int> cand_;
  int n_;

  vector<int> parse(const vector<int> &s) {
    vector<int> t;
    for (int i = 0; i < s.size(); i++) {
      if (s[i]) {
        t.push_back(cand_[i]);
      }
    }
    return t;
  }

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
      if (s[i]) {
        sum += cand_[i];
      }
    }
    return sum;
  }

  void comb(vector<int> &s, int p) {
    if (s.size() == p) {
      int sum = getSum(s);
      if (sum == n_) {
        vector<int> t = parse(s);
        sort(t.begin(), t.end());
        if (!exist(t)) {
          result_.push_back(t);
        }
      }
      return;
    }
    for (int i = 0; i < 2; i++) {
      s[p] = i;
      comb(s, p + 1);
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
    vector<int> tmp(9);
    comb(tmp, 0);
    return result_;
  }
};
