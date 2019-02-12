/**
 * https://leetcode.com/problems/maximum-depth-of-binary-tree/
 */

#include "LeetCode.h"

class Solution {
  int maxDepthImpl(TreeNode *root, int depth) {
    if (!root) {
      return depth;
    }
    int ld = maxDepthImpl(root->left, depth + 1);
    int rd = maxDepthImpl(root->right, depth + 1);
    return max(ld, rd);
  }

public:
  int maxDepth(TreeNode *root) { return maxDepthImpl(root, 0); }
};