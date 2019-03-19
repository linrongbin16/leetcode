/**
 * https://leetcode.com/problems/4sum/
 */

#include "LeetCode.h"

class Solution {
  int *tb_;
  vector<vector<int>> result_;

  void recursion(vector<int> &nums, int target, int *tb, int p) {
    if (p == nums.size()) {
      int sum = 0;
      for (int i = 0; i < nums.size(); i++) {
        sum += (tb[i]) ? nums[i] : 0;
      }
      if (sum == target) {
        result_.push_back(nums);
      }
      return;
    }

    for (int x = 0; x < 2; x++) {
      tb[p] = x;
      recursion(nums, target, tb, p + 1);
    }
  }

public:
  vector<vector<int>> fourSum(vector<int> &nums, int target) {
    result_.clear();
    tb_ = new int[nums.size()];
    for (int i = 0; i < nums.size(); i++) {
      tb_[i] = 0;
    }
    recursion(nums, target, tb_, 0);
    delete[] tb_;
    return result_;
  }
};
