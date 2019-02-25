/**
 * https://leetcode.com/problems/word-search/
 */

#include "LeetCode.h"

class Solution {
  int n_;
  int m_;
  char **visit_;

  void createVisit() {
    visit_ = new char *[n_];
    for (int i = 0; i < n_; i++) {
      visit_[i] = new char[m_];
    }
  }

  void freeVisit() {
    for (int i = 0; i < n_; i++) {
      if (visit_[i]) {
        delete[] visit_[i];
      }
    }
    if (visit_) {
      delete[] visit_;
    }
  }

  void resetVisit() {
    for (int i = 0; i < n_; i++) {
      for (int j = 0; j < m_; j++) {
        visit_[i][j] = (char)0;
      }
    }
  }

  bool search(vector<vector<char>> &board, string word, int is, int js) {
    resetVisit();
    int row[] = {-1, 1, 0, 0};
    int col[] = {0, 0, -1, 1};
    deque<tuple<int, int, int>> q;
    q.push_back(make_tuple(0, is, js));
    visit_[is][js] = (char)1;

    while (!q.empty()) {
      tuple<int, int, int> p = q.front();
      q.pop_front();
      int pos = get<0>(p);
      if (pos == word.length() - 1) {
        return true;
      }
      for (int i = 0; i < 4; i++) {
        int r = get<1>(p) + row[i];
        int c = get<2>(p) + col[i];
        if (r >= 0 && r < n_ && c >= 0 && c < m_ && (!(int)visit_[r][c]) &&
            board[r][c] == word[pos + 1]) {
          visit_[r][c] = (char)1;
          q.push_back(make_tuple(pos + 1, r, c));
        }
      }
    }

    return false;
  }

public:
  bool exist(vector<vector<char>> &board, string word) {
    n_ = board.size();
    m_ = board[0].size();
    createVisit();
    for (int i = 0; i < board.size(); i++) {
      for (int j = 0; j < board[i].size(); j++) {
        if (word[0] == board[i][j]) {
          if (search(board, word, i, j)) {
            freeVisit();
            return true;
          }
        }
      }
    }
    freeVisit();
    return false;
  }
};
