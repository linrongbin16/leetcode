/**
 * https://leetcode.com/problems/reverse-string-ii/
 */

#include "LeetCode.h"

class Solution {
public:
  string reverseStr(string s, int k) {
    for (int i = 0; i < s.size(); i += 2 * k) {
      int pos = (i + k < s.size()) ? (i + k) : s.size();
      reverse(s.begin() + i, s.begin() + pos);
    }
    return s;
  }
};
