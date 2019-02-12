/**
 * https://leetcode.com/problems/sum-of-left-leaves/
 */

#include "LeetCode.h"

class Solution {
  bool leftLeave(TreeNode *e, TreeNode *father) {
    if (!father || !e) {
      return false;
    }
    return e == father->left && e->left == NULL && e->right == NULL;
  }

  void sumOfLeftLeavesImpl(TreeNode *e, TreeNode *father, int &cnt) {
    if (!e) {
      return;
    }
    if (leftLeave(e, father)) {
      cnt += e->val;
    }
    sumOfLeftLeavesImpl(e->left, e, cnt);
    sumOfLeftLeavesImpl(e->right, e, cnt);
  }

public:
  int sumOfLeftLeaves(TreeNode *root) {
    int sum = 0;
    sumOfLeftLeavesImpl(root, NULL, sum);
    return sum;
  }
};