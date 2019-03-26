/**
 * https://leetcode.com/problems/4sum/
 */

#include "LeetCode.h"

// TODO: not pass
class Solution {
  vector<int> tb_;
  int quad_;
  vector<vector<int>> result_;

  void printTb() {
    cout << "tb: ";
    for (int i = 0; i < tb_.size(); i++) {
      cout << tb_[i] << " ";
    }
    cout << endl;
  }

  bool exist(vector<int> &t) {
    for (int i = 0; i < result_.size(); i++) {
      if (result_[i] == t) {
        return true;
      }
    }
    return false;
  }

  void recursion(vector<int> &nums, int target, vector<int> &tb, int p) {
    if (quad_ == 4 || p >= nums.size()) {
      int sum = 0;
      for (int i = 0; i < nums.size(); i++) {
        sum += (tb[i]) ? nums[i] : 0;
      }
      if (sum == target) {
        printTb();
        vector<int> tmp;
        for (int i = 0; i < nums.size(); i++) {
          if (tb[i]) {
            tmp.push_back(nums[i]);
          }
        }
        if (tmp.size() == 4 && !exist(tmp)) {
          result_.push_back(tmp);
        }
      }
      return;
    }

    for (int x = 0; x < 2; x++) {
      tb[p] = x;
      if (x > 0) {
        quad_ += 1;
      }
      recursion(nums, target, tb, p + 1);
      if (x > 0) {
        quad_ -= 1;
      }
    }
  }

public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    sort(nums.begin(), nums.end());
    result_.clear();
    tb_.clear();
    tb_.resize(nums.size());
    for (int i = 0; i < nums.size(); i++) {
      tb_[i] = 0;
    }
    quad_ = 0;
    recursion(nums, target, tb_, 0);
    return result_;
  }
};
