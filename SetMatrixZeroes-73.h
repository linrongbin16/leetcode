/**
 * https://leetcode.com/problems/set-matrix-zeroes/
 */

#include "LeetCode.h"

class Solution {
public:
  void setZeroes(vector<vector<int>> &matrix) {
    vector<pair<int, int>> zpos;
    for (int i = 0; i < matrix.size(); i++) {
      for (int j = 0; j < matrix[i].size(); j++) {
        if (matrix[i][j] == 0) {
          zpos.push_back(make_pair(i, j));
        }
      }
    }

    for (int i = 0; i < zpos.size(); i++) {
      pair<int, int> z = zpos[i];
      int row = z.first;
      int col = z.second;

      for (int k = 0; k < matrix[row].size(); k++) {
        matrix[row][k] = 0;
      }
      for (int k = 0; k < matrix.size(); k++) {
        matrix[k][col] = 0;
      }
    }
  }
};
