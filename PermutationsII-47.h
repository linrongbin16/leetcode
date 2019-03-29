/**
 * https://leetcode.com/problems/permutations-ii/
 */

#include "LeetCode.h"

class Solution {

  void recursive(vector<vector<int>> &result, vector<int> &nums, int p) {
    if (p == nums.size()) {
      if (none_of(result.begin(), result.end(),
                  [&nums](vector<int> &x) { return nums == x; })) {
        result.push_back(nums);
      }
      return;
    }
    for (int i = 0; i <= p; i++) {
      if (i != p && nums[i] == nums[p])
        continue;
      swap(nums[i], nums[p]);
      recursive(result, nums, p + 1);
      swap(nums[i], nums[p]);
    }
  }

public:
  vector<vector<int>> permuteUnique(vector<int> &nums) {
    vector<vector<int>> result;
    recursive(result, nums, 0);
    return result;
  }
};
