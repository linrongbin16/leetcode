#include "LeetCode.h"

class Solution {
  int tilt_;

  int sum(TreeNode *e) {
    if (!e) {
      return 0;
    }
    int ls = sum(e->left);
    int rs = sum(e->right);
    return e->val + ls + rs;
  }

  void preorderTilt(TreeNode *e) {
    if (!e) {
      return;
    }
    tilt_ += (int)abs(sum(e->left) - sum(e->right));
    preorderTilt(e->left);
    preorderTilt(e->right);
  }

public:
  int findTilt(TreeNode *root) {
    tilt_ = 0;
    preorderTilt(root);
    return tilt_;
  }
};
