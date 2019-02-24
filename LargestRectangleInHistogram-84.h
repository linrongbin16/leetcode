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
    int n = heights.size() + 1;
    int area = 0;
    int *t = new int[n];
    for (int i = 0; i < heights.size(); i++) {
      memset(t, 0, sizeof(int) * n);
      for (int j = i; j < heights.size(); j++) {
        // [i,j]
        if (i == j) {
          t[j] = heights[j];
        } else {
          t[j] = min(t[j - 1], heights[j]);
        }
        area = max(area, t[j] * (j - i + 1));
      }
    }
    delete[] t;
    return area;
  }
};
