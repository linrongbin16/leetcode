/**
 * https://leetcode.com/problems/sum-of-left-leaves/
 */

#include "LeetCode.h"

class Solution {
  bool leftChild(TreeNode *e, TreeNode *father) {
    if (!father || !e) {
      return false;
    }
    return e == father->left;
  }

  void sumOfLeftLeavesImpl(TreeNode *e, TreeNode *father, int &cnt) {
    if (!e) {
      return;
    }
    if (leftChild(e, father)) {
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