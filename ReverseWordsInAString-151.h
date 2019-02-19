/**
 * https://leetcode.com/problems/reverse-words-in-a-string/
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
      snd = s.length();
    }
    return make_pair(fst, snd);
  }

public:
  void reverseWords(string &s) {
    vector<string> words;
    int pos = 0;
    while (pos < s.length()) {
      pair<int, int> p = firstWord(s, pos);
      if (p.first < 0 || p.second < 0) {
        break;
      }
      words.push_back(string(s, p.first, p.second - p.first + 1));
      pos = p.second + 1;
    }
    string result = "";
    for (int i = words.size() - 1; i >= 0; i--) {
      result = result + words[i];
      if (i > 0) {
        result = result + " ";
      }
    }
    s = result;
  }
};
