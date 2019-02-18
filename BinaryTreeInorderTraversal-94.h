/**
 * https://leetcode.com/problems/binary-tree-inorder-traversal/
 */

#include "LeetCode.h"

class Solution {
  vector<int> result_;

  void inorder(TreeNode *e) {
    if (!e) {
      return;
    }

    inorder(e->left);
    result_.push_back(e->val);
    inorder(e->right);
  }

public:
  vector<int> inorderTraversal(TreeNode *root) {
    result_.clear();
    if (!root) {
      return result_;
    }
    inorder(root);
    return result_;
  }
};
