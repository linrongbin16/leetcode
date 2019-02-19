/**
 * https://leetcode.com/problems/validate-binary-search-tree/
 */

#include "LeetCode.h"

class Solution {
  TreeNode *next(TreeNode *e) {
    if (!e) {
      return NULL;
    }
    e = e->right;
    while (e && e->left) {
      e = e->left;
    }
    return e;
  }

  TreeNode *previous(TreeNode *e) {
    if (!e) {
      return NULL;
    }
    e = e->left;
    while (e && e->right) {
      e = e->right;
    }
    return e;
  }

public:
  bool isValidBST(TreeNode *root) {
    if (!root) {
      return true;
    }
    if (root->left && root->left->val >= root->val) {
      return false;
    }
    if (root->right && root->right->val <= root->val) {
      return false;
    }
    TreeNode *ne = next(root);
    if (ne && ne->val <= root->val) {
      return false;
    }
    TreeNode *pe = previous(root);
    if (pe && pe->val >= root->val) {
      return false;
    }
    if (!isValidBST(root->left)) {
      return false;
    }
    if (!isValidBST(root->right)) {
      return false;
    }
    return true;
  }
};
