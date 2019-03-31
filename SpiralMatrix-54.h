/**
 * https://leetcode.com/problems/spiral-matrix/
 */

#include "LeetCode.h"

class Solution {
public:
  vector<int> spiralOrder(vector<vector<int>> &matrix) {
    vector<int> result;
    int row_dir = 0, col_dir = 1;
    int i = 0;
    int j = 0;
    int n = matrix.size();
    int m = matrix[0].size();
    int tot = matrix.size() * matrix[0].size();
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    for (int p = 0; p < tot; p++) {
      int ni = i + row_dir;
      int nj = j + col_dir;
      if (i >= up && i < n - down && j >= left && j < m - right) {
        result.push_back(matrix[i][j]);
      } else {
        if (i < up) {
          row_dir = 0;
          col_dir = 1;
          left++;
        } else if (i >= n - down) {
          row_dir = 0;
          col_dir = -1;
          right++;
        } else if (j < left) {
          row_dir = -1;
          col_dir = 0;
          down++;
        } else if (j >= m - right) {
          row_dir = 1;
          col_dir = 0;
          up++;
        } else {
          assert(false);
        }
      }
      i += row_dir;
      j += col_dir;
    }
    return result;
  }
};
