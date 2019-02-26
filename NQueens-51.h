/**
 * https://leetcode.com/problems/n-queens/
 */

#include "LeetCode.h"

class Solution {
  int n_;
  vector<vector<string>> result_;
  vector<int> visit_;
  char **tab_;

  vector<string> parse(vector<int> &s) {
    vector<string> r;
    for (int i = 0; i < n_; i++) {
      string t(n_, '.');
      t[s[i]] = 'Q';
      r.push_back(t);
    }
    return r;
  }

  void recursive(vector<int> &s, int p) {
    if (p == n_) {
      result_.push_back(parse(s));
      return;
    }
    for (int i = 0; i < n_; i++) {
      if (visit_[i]) {
        continue;
      }
      visit_[i] = 1;
      s[p] = i;
      recursive(s, p + 1);
      visit_[i] = 0;
    }
  }

public:
  vector<vector<string>> solveNQueens(int n) {
    result_.clear();
    n_ = n;
    visit_.resize(n_);
    for (int i = 0; i < n_; i++) {
      visit_[i] = 0;
    }
    vector<int> tmp(n_);
    recursive(tmp, 0);
    return result_;
  }
};
