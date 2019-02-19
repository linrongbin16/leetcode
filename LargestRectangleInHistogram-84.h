/**
 * https://leetcode.com/problems/largest-rectangle-in-histogram/
 */

#include "LeetCode.h"

class Solution {
public:
  int largestRectangleArea(vector<int> &heights) {
    if (heights.size() == 0) {
      return 0;
    }
    if (heights.size() <= 1) {
      return heights[0];
    }
    vector<int> stk;
    for (int i = 0; i < heights.size(); i++) {
    }
    return 0;
  }
};
