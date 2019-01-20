#include "std.h"

class Solution {
public:
  int n;

  int **createTable() {
    int **f = new int *[n];
    for (int i = 0; i < n; i++) {
      f[i] = new int[n];
      memset(f[i], 0, n * sizeof(int));
    }
    return f;
  }

  void freeTable(int **f) {
    for (int i = 0; i < n; i++) {
      delete[] f[i];
    }
    delete[] f;
  }

  string longestPalindrome(string s) {
    n = s.length();
    if (n <= 0) {
      return "";
    }
    int **f = createTable();
    for (int i = 0; i < n; i++) {
      f[i][i] = 1;
    }
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (i != j) {
          if (i + 1 <= j - 1) {
            f[i][j] = (s[i] == s[j]) ? (f[i + 1][j - 1] + 2) : f[i + 1][j - 1];
          } else {
            f[i][j] = (s[i] == s[j]) ? 2 : 0;
          }
        }
      }
    }
    int start, end, len = 0;
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (len < f[i][j]) {
          len = f[i][j];
          start = i;
          end = j;
        }
      }
    }
    string result = s.substr(start, end - start + 1);
    freeTable(f);
    return result;
  }
};

