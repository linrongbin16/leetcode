/**
 * https://leetcode.com/problems/zigzag-conversion/
 */

#include "LeetCode.h"

class Solution {
public:
  bool isHead(int index, int numRows) {
    return index % max(2 * numRows - 2, 1) == 0;
  }
  bool isTail(int index, int numRows) {
    return index % max(2 * numRows - 2, 1) == numRows - 1;
  }

  string convert(string s, int numRows) {
    if (s.length() <= 1) {
      return s;
    }
    string result = s;
    int distance = max(2 * numRows - 2, 1);
    int p = 0;

    for (int i = 0; i < numRows; i++) {
      if (isHead(i, numRows) || isTail(i, numRows)) {
        for (int j = i; j < s.length(); j += distance) {
          result[p++] = s[j];
        }
      } else {
        for (int j = i; j < s.length(); j += distance) {
          result[p++] = s[j];
          int offset = j % distance;
          int next = j + 2 * (numRows - offset - 1);
          if (next < s.length()) {
            result[p++] = s[next];
          }
        }
      }
    }

    return result;
  }
};
