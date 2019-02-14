/**
 * https://leetcode.com/problems/path-sum-iii/
 */

#include "LeetCode.h"

class Solution {
  int sum_;
  int count_;
  int add_;

  void preorderTraverse(TreeNode *e) {
    if (!e) {
      return;
    }
    add_ += e->val;
    if (add_ == sum_) {
      count_++;
    }
    preorderTraverse(e->left);
    preorderTraverse(e->right);
    add_ -= e->val;
  }

  void preorder(TreeNode *e) {
    if (!e) {
      return;
    }
    add_ = 0;
    preorderTraverse(e);
    preorder(e->left);
    preorder(e->right);
  }

public:
  int pathSum(TreeNode *root, int sum) {
    sum_ = sum;
    count_ = 0;
    preorder(root);
    return count_;
  }
};

