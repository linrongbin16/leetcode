/**
 * https://leetcode.com/problems/path-sum/
 */

#include "LeetCode.h"

class Solution {
  int sum_;
  bool has_;
  int add_;

  void preorderTraverse(TreeNode *e) {
    if (!e) {
      return;
    }
    if (has_) {
      return;
    }
    add_ += e->val;
    if (!e->left && !e->right) {
      if (add_ == sum_) {
        has_ = true;
      }
    }
    preorderTraverse(e->left);
    preorderTraverse(e->right);
    add_ -= e->val;
  }

public:
  bool hasPathSum(TreeNode *root, int sum) {
    if (!root) {
      return false;
    }
    sum_ = sum;
    add_ = 0;
    has_ = false;
    preorderTraverse(root);
    return has_;
  }
};
