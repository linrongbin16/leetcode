/**
 * https://leetcode.com/problems/length-of-last-word/
 */

#include "LeetCode.h"

class Solution {
public:
  int lengthOfLastWord(string s) {
    int i = s.length() - 1;
    int last;
    bool found = false;
    while (i >= 0) {
      while (i >= 0 && isspace(s[i])) {
        i--;
      }
      last = i;
      while (i >= 0 && !isspace(s[i])) {
        i--;
      }
      found = true;
      break;
    }
    return (found) ? last - i : 0;
  }
};
