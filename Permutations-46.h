/**
 * https://leetcode.com/problems/permutations/
 */

#include "LeetCode.h"

class Solution {

  void recursive(vector<vector<int>> &result, vector<int> &nums, int p) {
    if (p == nums.size()) {
      result.push_back(nums);
      return;
    }
    for (int i = 0; i <= p; i++) {
      swap(nums[i], nums[p]);
      recursive(result, nums, p + 1);
      swap(nums[i], nums[p]);
    }
  }

public:
  vector<vector<int>> permute(vector<int> &nums) {
    vector<vector<int>> result;
    recursive(result, nums, 0);
    return result;
  }
};
