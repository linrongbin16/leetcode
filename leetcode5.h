#include "std.h"

class Solution {
public:
  int MAX = 1001;

  string longestPalindrome(string s) {
    int n = s.length();
    int f[MAX][MAX];
    memset(f, 0, MAX * MAX * sizeof(int *));
    for (int i = 0; i < n; i++) {
      for (int j = i; j < n; j++) {
        if (i == j) {
          f[i][j] = 1;
        } else {
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
      for (int j = 0; j < n; j++) {
        if (len < f[i][j]) {
          len = f[i][j];
          start = i;
          end = j;
        }
      }
    }
    string result = s.substr(start, end - start + 1);
    return result;
  }
};

