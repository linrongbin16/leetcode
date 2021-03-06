/**
 * https://leetcode.com/problems/palindrome-number/
 */

#include "LeetCode.h"

class Solution {
public:
  bool isPalindrome(int x) {
    bool negative = x < 0;
    string result = "";
    while (x != 0) {
      result += (char)(x % 10 + (int)'0');
      x /= 10;
    }
    if (negative) {
      result += '-';
    }
    int i = 0, j = result.length() - 1;
    while (i <= j) {
      if (result[i] != result[j]) {
        return false;
      }
      i++;
      j--;
    }
    return true;
  }
};
