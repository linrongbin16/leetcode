#include "LeetCode.h"

class Solution {
  int minDepthImpl(TreeNode *root, int depth) {
    if (!root) {
      return depth;
    }
    if (root->left || root->right) {
      int ld = minDepthImpl(root->left, depth + 1);
      int rd = minDepthImpl(root->right, depth + 1);
      return max(ld, rd);
    } else {
      return depth;
    }
  }

public:
  int minDepth(TreeNode *root) { return minDepthImpl(root, 0); }
};