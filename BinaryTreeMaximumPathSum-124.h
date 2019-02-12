/**
 * https://leetcode.com/problems/binary-tree-maximum-path-sum/
 */

#include "LeetCode.h"

// TODO: not pass
class Solution {
  int maxSum(TreeNode *e) {
    int s = (e) ? e->val : 0;
    s = max(s, s + ((e && e->left) ? e->left->val : 0));
    s = max(s, s + ((e && e->right) ? e->right->val : 0));
    return s;
  }

  int maxPathSumImpl(TreeNode *e) {
    if (!e) {
      return 0;
    }
    int es = maxSum(e);
    if (e->left) {
      es = max(es, maxPathSumImpl(e->left));
    }
    if (e->right) {
      es = max(es, maxPathSumImpl(e->right));
    }
    return es;
  }

public:
  int maxPathSum(TreeNode *root) { return maxPathSumImpl(root); }
};