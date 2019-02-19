/**
 * https://leetcode.com/problems/reverse-string/
 */

#include "LeetCode.h"

class Solution {
public:
  void reverseString(vector<char> &s) {
    if (s.size() <= 1) {
      return;
    }
    for (int i = 0, j = s.size() - 1; i <= j; i++, j--) {
      swap(s[i], s[j]);
    }
  }
};
