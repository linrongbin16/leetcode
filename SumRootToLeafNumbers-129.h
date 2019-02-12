/**
 * https://leetcode.com/problems/sum-root-to-leaf-numbers/
 */

#include "LeetCode.h"

class Solution {
  void sumNumbersImpl(TreeNode *e, int &sum, int &add) {
    if (!e) {
      return;
    }
    add = add * 10 + e->val;
    if (!e->left && !e->right) {
      sum += add;
    }
    sumNumbersImpl(e->left, sum, add);
    sumNumbersImpl(e->right, sum, add);
    add = (add - e->val) / 10;
  }

public:
  int sumNumbers(TreeNode *root) {
    if (!root) {
      return 0;
    }
    int sum = 0, add = 0;
    sumNumbersImpl(root, sum, add);
    return sum;
  }
};