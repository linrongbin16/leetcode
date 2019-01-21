#include "std.h"

class Solution {
public:
  string convert(string s, int numRows) {
    string result = s;
    for (int i = 0; i < numRows; i++) {
      int j = i;
      int k = 0;
      result[j] = s[i + k];
      k++;
      while (j < s.length()) {
        j += (2 * numRows - 2 - 2 * i);
        result[j] = s[i + k];
        k++;
        j += 2 * i;
        if (j >= s.length()) {
          break;
        }
        result[j] = s[i + k];
        k++;
      }
    }
    return result;
  }
};

