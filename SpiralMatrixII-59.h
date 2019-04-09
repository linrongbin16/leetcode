/**
 * https://leetcode.com/problems/spiral-matrix-ii/
 */

#include "LeetCode.h"

class Solution {
public:
  vector<vector<int>> generateMatrix(int n) {
    vector<vector<int>> matrix;
    for (int i = 0; i < n; i++) {
      matrix.push_back(vector<int>(n, 0));
    }
    int row_dir = 0, col_dir = 1;
    int i = 0;
    int j = 0;
    int tot = n * n;
    int up = 0;
    int down = 0;
    int left = 0;
    int right = 0;
    int p = 1;
    while (p <= tot) {
      int ni = i + row_dir;
      int nj = j + col_dir;
      if (i >= up && i < n - down && j >= left && j < n - right) {
        matrix[i][j] = p;
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
        } else if (j >= n - right) {
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
    return matrix;
  }
};
