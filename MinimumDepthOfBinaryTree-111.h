#include "LeetCode.h"

class Solution {
  int minDepthImpl(TreeNode *root, int depth) {
    if (!root) {
      return depth;
    }
    int ld = minDepthImpl(root->left, depth + 1);
    int rd = minDepthImpl(root->right, depth + 1);
    return (root->left && root->right) ? min(ld, rd) : max(ld, rd);
  }

public:
  int minDepth(TreeNode *root) { return minDepthImpl(root, 0); }
};