/**
 * https://leetcode.com/problems/reverse-integer/
 */

#include "LeetCode.h"

class Solution {
public:
  int reverse(int x) {
    int64_t result = 0;
    while (x != 0) {
      result = result * 10L + (int64_t)(x % 10);
      x /= 10;
    }
    if (result > (int64_t)INT_MAX || result < (int64_t)INT_MIN) {
      return 0;
    }
    return result;
  }
};
