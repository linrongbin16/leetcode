#include "std.h"

class Solution {
public:
  int maxArea(vector<int> &height) {
    int result = 0;
    int *f = new int[height.size() + 1];
    memset(f, 0, (height.size() + 1) * sizeof(int));
    for (int i = 0; i < height.size(); i++) {
      for (int j = i + 1; j < height.size(); j++) {
        result = max(result, min(height[i], height[j]) * (j - i));
      }
    }
    delete[] f;
    return result;
  }
};

