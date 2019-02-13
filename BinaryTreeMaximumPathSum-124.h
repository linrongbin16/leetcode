/**
 * https://leetcode.com/problems/binary-tree-maximum-path-sum/
 */

#include "LeetCode.h"

class Solution {
  int bestToRoot(TreeNode *root, int &bestOverall) {
    if (!root)
      return 0;
    auto left = max(0, bestToRoot(root->left, bestOverall));
    auto right = max(0, bestToRoot(root->right, bestOverall));
    // update the best overall value to be the max path including contributions
    // from both sides
    bestOverall = max(bestOverall, root->val + left + right);
    // return the max of the path from the left and the path from the right
    return max(root->val + left, root->val + right);
  }

public:
  int maxPathSum(TreeNode *root) {
    auto bestOverall = numeric_limits<int>::min();
    bestToRoot(root, bestOverall);
    return bestOverall;
  }
};