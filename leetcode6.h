#include "std.h"

class Solution {
public:
  string convert(string s, int numRows) {
    string result = s;

    int p = 1, next;
    result[0] = s[0];
    for (int i = 0; i < numRows; i++) {
      int len = 2 * (numRows - i) - 1;
      next = (i + 1) * len - 1;
      if (next >= s.length()) {
        break;
      }
      result[p++] = s[next];
      if (i > 0) {
        next += 2 * i;
        if (next >= s.length()) {
          break;
        }
        result[p++] = s[next];
      }
    }

    return result;
  }
};

