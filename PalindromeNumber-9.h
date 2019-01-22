#include "std.h"

class Solution {
public:
  bool isPalindrome(int x) {
    bool negative = x < 0;
    string result = "";
    x = (x < 0) ? (-x) : x;
    while (x > 0) {
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
    }
    return true;
  }
};

