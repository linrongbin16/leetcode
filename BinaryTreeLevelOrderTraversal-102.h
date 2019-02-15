/**
 * https://leetcode.com/problems/binary-tree-level-order-traversal/
 */

#include "LeetCode.h"

class Solution {
  vector<pair<int, int>> levelMap_;
  vector<vector<int>> result_;
  int level_;
  int depth_;

  void preorder(TreeNode *e) {
    if (!e) {
      return;
    }
    level_++;
    depth_ = max(depth_, level_);
    levelMap_.push_back(make_pair(e->val, level_ - 1));
    preorder(e->left);
    preorder(e->right);
    level_--;
  }

public:
  vector<vector<int>> levelOrder(TreeNode *root) {
    levelMap_.clear();
    result_.clear();
    level_ = 0;
    depth_ = 0;
    if (!root) {
      return result_;
    }
    preorder(root);
    result_.resize(depth_);
    for (auto i = levelMap_.begin(); i != levelMap_.end(); i++) {
      result_[i->second].push_back(i->first);
    }
    return result_;
  }
};
