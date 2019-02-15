#include "LeetCode.h"

class Solution {
  bool balanced_;

  int height(TreeNode *e) {
    if (!e) {
      return 0;
    }
    int lh = (e->left) ? height(e->left) : 0;
    int rh = (e->right) ? height(e->right) : 0;
    return max(lh, rh) + 1;
  }

  bool isBalancedImpl(TreeNode *e) {
    if (!e) {
      return true;
    }
    int lh = height(e->left);
    int rh = height(e->right);
    return (int)(abs(lh - rh)) <= 1;
  }

  void preorder(TreeNode *e) {
    if (!e) {
      return;
    }
    if (!balanced_) {
      return;
    }
    int lh = height(e->left);
    int rh = height(e->right);
    if ((int)(abs(lh - rh)) > 1) {
      balanced_ = false;
    }
    preorder(e->left);
    preorder(e->right);
  }

public:
  bool isBalanced(TreeNode *root) {
    if (!root) {
      return true;
    }
    balanced_ = true;
    preorder(root);
    return balanced_;
  }
};
