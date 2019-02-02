#include "LeetCode.h"

class Solution {
public:
  int maxArea(vector<int> &height) {
    int result = 0;
    for (int i = 0; i < height.size(); i++) {
      for (int j = i + 1; j < height.size(); j++) {
        result = max(result, min(height[i], height[j]) * (j - i));
      }
    }
    return result;
  }
};

