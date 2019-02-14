/**
 * https://leetcode.com/problems/binary-tree-postorder-traversal/
 */

#include "LeetCode.h"

class Solution {
  void postorderTraversalImpl(TreeNode *root, vector<int> &t) {
    if (!root) {
      return;
    }
    postorderTraversalImpl(root->left, t);
    postorderTraversalImpl(root->right, t);
    t.push_back(root->val);
  }

public:
  vector<int> postorderTraversal(TreeNode *root) {
    vector<int> t;
    postorderTraversalImpl(root, t);
    return t;
  }
};
