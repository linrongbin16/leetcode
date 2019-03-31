/**
 * https://leetcode.com/problems/powx-n/
 */

#include "LeetCode.h"

#define PRECISION 0.000001f

class Solution {
public:
  double myPow(double x, int n) {
    if (fabs(x) <= PRECISION && n < 0) {
      throw new string("x can't be 0!");
    }
    if (fabs(x) <= PRECISION && n > 0) {
      return 0;
    }
    if (n == 0) {
      return 1;
    }
    double t = myPow(x, n / 2);
    if (n % 2 == 1 || n % 2 == -1) {
      return (n > 0 ? t * t * x : 1 / x * t * t);
    }
    return t * t;
  }
};
