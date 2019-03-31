/**
 * https://leetcode.com/problems/rotate-image/
 */

#include "LeetCode.h"

class Solution {

  pair<int, int> lastPosImpl(int x, int y, int n) {
    int c = n / 2;
    int diffx = abs(x - c), diffy = abs(y - c);
    // center
    if (x == c && y == c) {
      return make_pair(c, c);
    }
    // 1st part
    if (x < c && y <= c) {
      return make_pair(c - diffy, c + diffx);
    }
    // 2nd part
    if (x <= c && y > c) {
      return make_pair(c + diffy, c + diffx);
    }
    // 3rd part
    if (x > c && y >= c) {
      return make_pair(c + diffy, c - diffx);
    }
    // 4th part
    if (x >= c && y < c) {
      return make_pair(c - diffy, c - diffx);
    }
    assert(false);
    return make_pair(0, 0);
  }

  // scale *2
  pair<int, int> lastPos(int x, int y, int n) {
    pair<int, int> r = lastPosImpl(2 * x, 2 * y, 2 * n);
    return make_pair(r.first / 2, r.second / 2);
  }

public:
  void rotate(vector<vector<int>> &matrix) {
    for (int i = 0; i < matrix.size() / 2; i++) {
      for (int j = 0; j < matrix.size() / 2; j++) {
        pair<int, int> r = make_pair(i, j);
        int tmp = matrix[i][j];
        // repeat 4 times
        for (int k = 0; k < 4; k++) {
          cout << "[" << r.first << "," << r.second << "]" << tmp;
          r = lastPos(r.first, r.second, matrix.size() - 1);
          cout << " ->[" << r.first << "," << r.second << "]"
               << matrix[r.first][r.second] << endl;
          swap(matrix[r.first][r.second], tmp);
        }
      }
    }
    if (matrix.size() % 2) {
      for (int i = 0, j = matrix.size() / 2; i < matrix.size() / 2; i++) {
        pair<int, int> r = make_pair(i, j);
        int tmp = matrix[i][j];
        // repeat 4 times
        for (int k = 0; k < 4; k++) {
          cout << "[" << r.first << "," << r.second << "]" << tmp;
          r = lastPos(r.first, r.second, matrix.size() - 1);
          cout << " ->[" << r.first << "," << r.second << "]"
               << matrix[r.first][r.second] << endl;
          swap(matrix[r.first][r.second], tmp);
        }
      }
    }
  }
};
