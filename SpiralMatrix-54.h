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
    int m = matrix.size() == 0 ? 0 : matrix[0].size();
    int tot = n * m;
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    int p = 0;
    while (p < tot) {
      int ni = i + row_dir;
      int nj = j + col_dir;
      if (i >= up && i < n - down && j >= left && j < m - right) {
        result.push_back(matrix[i][j]);
        p++;
      } else {
        if (i < up) {
          row_dir = 0;
          col_dir = 1;
          left++;
          i++;
        } else if (i >= n - down) {
          row_dir = 0;
          col_dir = -1;
          right++;
          i--;
        } else if (j < left) {
          row_dir = -1;
          col_dir = 0;
          down++;
          j++;
        } else if (j >= m - right) {
          row_dir = 1;
          col_dir = 0;
          up++;
          j--;
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
