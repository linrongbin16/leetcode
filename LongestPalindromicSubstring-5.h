/**
 * https://leetcode.com/problems/longest-palindromic-substring/
 */

#include "LeetCode.h"

class Solution {
public:
  bool palindrome(const char *s, int len) {
    assert(len > 0);
    if (len <= 1) {
      return true;
    }
    int i = 0;
    int j = len - 1;
    while (i <= j) {
      if (s[i] != s[j]) {
        return false;
      }
      i++;
      j--;
    }
    return true;
  }

  string longestPalindrome(string s) {
    int n = s.length();
    if (n <= 1) {
      return s;
    }
    string result = "";

    for (int i = 0; i < n - 1; i++) {
      if (result.length() > n - i) {
        break;
      }
      for (int j = n - i; j > 0; j--) {
        if (result.length() >= j) {
          break;
        }
        if (palindrome(s.c_str() + i, j)) {
          if (j > result.length()) {
            result = s.substr(i, j);
            break;
          }
        }
      }
    }
    return result;
  }
};
