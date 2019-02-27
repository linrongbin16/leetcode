/**
 * https://leetcode.com/problems/n-queens/
 */

#include "LeetCode.h"

class Solution {
  int n_;
  vector<vector<string>> result_;
  char **tab_;

  void createTable() {
    tab_ = new char *[n_];
    for (int i = 0; i < n_; i++) {
      tab_[i] = new char[n_];
      for (int j = 0; j < n_; j++) {
        tab_[i][j] = '.';
      }
    }
  }

  void freeTable() {
    for (int i = 0; i < n_; i++) {
      delete[] tab_[i];
    }
    delete[] tab_;
  }

  vector<string> parse() {
    vector<string> r;
    for (int i = 0; i < n_; i++) {
      string t(n_, '.');
      for (int j = 0; j < n_; j++) {
        t[j] = tab_[i][j];
      }
      r.push_back(t);
    }
    return r;
  }

  bool validPos(int i, int j) {
    for (int k = 0; k < n_; k++) {
      if (tab_[i][k] == 'Q') {
        return false;
      }
      if (tab_[k][j] == 'Q') {
        return false;
      }
    }
    for (int k = 0; k < n_; k++) {
      if ((i - k) >= 0 && (i - k) < n_ && (j - k) >= 0 && (j - k) < n_ &&
          tab_[i - k][j - k] == 'Q') {
        return false;
      }
      if ((i - k) >= 0 && (i - k) < n_ && (j + k) >= 0 && (j + k) < n_ &&
          tab_[i - k][j + k] == 'Q') {
        return false;
      }
      if ((i + k) >= 0 && (i + k) < n_ && (j + k) >= 0 && (j + k) < n_ &&
          tab_[i + k][j + k] == 'Q') {
        return false;
      }
      if ((i + k) >= 0 && (i + k) < n_ && (j - k) >= 0 && (j - k) < n_ &&
          tab_[i + k][j - k] == 'Q') {
        return false;
      }
    }
    return true;
  }

  void recursive(int p) {
    if (p == n_) {
      result_.push_back(parse());
      return;
    }
    for (int i = 0; i < n_; i++) {
      if (!validPos(p, i)) {
        continue;
      }
      tab_[p][i] = 'Q';
      recursive(p + 1);
      tab_[p][i] = '.';
    }
  }

public:
  vector<vector<string>> solveNQueens(int n) {
    result_.clear();
    n_ = n;
    createTable();
    recursive(0);
    freeTable();
    return result_;
  }
};
