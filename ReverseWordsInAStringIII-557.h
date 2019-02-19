/**
 * https://leetcode.com/problems/reverse-words-in-a-string-iii/
 */

#include "LeetCode.h"

class Solution {
  pair<int, int> firstWord(string &s, int pos) {
    int fst = -1, snd = -1;
    for (int i = pos; i < s.length(); i++) {
      if (!isspace(s[i])) {
        fst = i;
        break;
      }
    }
    for (int i = fst; i < s.length(); i++) {
      if (isspace(s[i])) {
        snd = i - 1;
        break;
      }
    }
    if (snd < 0) {
      snd = s.length() - 1;
    }
    return make_pair(fst, snd);
  }

public:
  string reverseWords(string s) {
    int pos = 0;
    while (pos < s.length()) {
      pair<int, int> p = firstWord(s, pos);
      if (p.first < 0 || p.second < 0) {
        break;
      }
      reverse(s.begin() + p.first, s.begin() + p.second + 1);
      pos = p.second + 1;
    }
    return s;
  }
};
