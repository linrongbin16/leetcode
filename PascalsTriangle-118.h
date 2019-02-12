#include "LeetCode.h"

class Solution {
public:
  vector<vector<int>> generate(int numRows) {
    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++) {
      vector<int> tmp;
      for (int j = 0; j < i; j++) {
        int val;
        int upperRow = i - 1;
        if (upperRow < 0) {
          val = 1;
        } else {
          vector<int> upper = result[upperRow];
          int lf = (j - 1 < 0 || j - 1 >= i) ? 0 : upper[j - 1];
          int rf = (j - 1 < 0 || j - 1 >= i) ? 0 : upper[j];
          val = lf + rf;
        }
        tmp.push_back(val);
      }
      result.push_back(tmp);
    }
    return result;
  }
};

