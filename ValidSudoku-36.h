/**
 * https://leetcode.com/problems/valid-sudoku/
 */

#include "LeetCode.h"

class Solution {
  int parseDigit(char c) {
    assert(c >= '0');
    assert(c <= '9');
    return (int)c - (int)'0';
  }

  char parseChar(int i) {
    assert(i >= 0);
    assert(i <= 9);
    return (char)(i + (int)'0');
  }

  bool validNumber(vector<vector<char>> &board, int r, int c, int number) {
    for (int i = 0; i < 9; i++) {
      if (isdigit(board[r][i]) && parseDigit(board[r][i]) == number) {
        return false;
      }
      if (isdigit(board[i][c]) && parseDigit(board[i][c]) == number) {
        return false;
      }
    }
    int boxr = r / 3, boxc = c / 3, p = 0;
    for (int i = 0 + boxr * 3; i < 3 + boxr * 3; i++) {
      for (int j = 0 + boxc * 3; j < 3 + boxc * 3; j++) {
        if (isdigit(board[i][j]) && parseDigit(board[i][j]) == number) {
          return false;
        }
      }
    }
    return true;
  }

  bool recursive(vector<vector<char>> &board, vector<pair<int, int>> &pending,
                 int index) {
    if (index == pending.size()) {
      return true;
    }

    int r = pending[index].first, c = pending[index].second;
    for (int i = 1; i <= 9; i++) {
      if (!validNumber(board, r, c, i)) {
        continue;
      }
      board[r][c] = parseChar(i);
      if (recursive(board, pending, index + 1)) {
        return true;
      }
      board[r][c] = '.';
    }
    return false;
  }

public:
  bool isValidSudoku(vector<vector<char>> &board) {
    vector<pair<int, int>> pending;
    for (int i = 0; i < 9; i++) {
      for (int j = 0; j < 9; j++) {
        if (board[i][j] == '.') {
          pending.push_back(make_pair(i, j));
        }
      }
    }
    return recursive(board, pending, 0);
  }
};
