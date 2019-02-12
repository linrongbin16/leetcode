#include "LeetCode.h"

class Solution {
  void preorderTraversalImpl(TreeNode *root, vector<int> &t) {
    if (!root) {
      return;
    }
    t.push_back(root->val);
    preorderTraversalImpl(root->left, t);
    preorderTraversalImpl(root->right, t);
  }

public:
  vector<int> preorderTraversal(TreeNode *root) {
    vector<int> t;
    preorderTraversalImpl(root, t);
    return t;
  }
};