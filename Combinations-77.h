/**
 * https://leetcode.com/problems/combinations/
 */

#include "LeetCode.h"

class Solution {
  vector<unordered_set<int>> result_;
  int *visit_;
  int *tab_;
  int n_;
  int k_;

  unordered_set<int> createSet() {
    unordered_set<int> v;
    for (int i = 0; i < k_; i++) {
      v.insert(tab_[i]);
    }
    return v;
  }

  bool setExist(const unordered_set<int> &s) {
    for (int i = 0; i < result_.size(); i++) {
      if (result_[i] == s) {
        return true;
      }
    }
    return false;
  }

  void recursive(int p) {
    if (p >= k_) {
      unordered_set<int> tmp = createSet();
      if (!setExist(tmp)) {
        result_.push_back(tmp);
      }
      return;
    }

    for (int i = 1; i <= n_; i++) {
      if (!visit_[i]) {
        tab_[p] = i;
        visit_[i] = 1;
        recursive(p + 1);
        visit_[i] = 0;
      }
    }
  }

  vector<int> convertVector(const unordered_set<int> &s) {
    vector<int> v;
    for (auto i = s.begin(); i != s.end(); i++) {
      v.push_back(*i);
    }
    return v;
  }

  vector<vector<int>> convert() {
    vector<vector<int>> v;
    for (int i = 0; i < result_.size(); i++) {
      v.push_back(convertVector(result_[i]));
    }
    return v;
  }

public:
  vector<vector<int>> combine(int n, int k) {
    result_.clear();
    k_ = k;
    n_ = n;
    tab_ = new int[k_];
    for (int i = 0; i < k_; i++) {
      tab_[i] = 1;
    }
    visit_ = new int[n_ + 1];
    for (int i = 0; i < n_ + 1; i++) {
      visit_[i] = 0;
    }
    recursive(0);
    delete[] tab_;
    delete[] visit_;
    return convert();
  }
};
