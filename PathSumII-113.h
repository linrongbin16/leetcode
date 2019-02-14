/**
 * https://leetcode.com/problems/path-sum-ii/
 */

#include "LeetCode.h"

class Solution {
  vector<vector<int>> result_;
  int sum_;
  vector<int> path_;

  void preorderTraverse(TreeNode *e) {
    if (!e) {
      return;
    }
    path_.push_back(e->val);
    if (!e->left && !e->right) {
      int add = 0;
      for (int i = 0; i < path_.size(); i++) {
        add += path_[i];
      }
      if (add == sum_) {
        result_.push_back(path_);
      }
    }
    preorderTraverse(e->left);
    preorderTraverse(e->right);
    path_.pop_back();
  }

public:
  vector<vector<int>> pathSum(TreeNode *root, int sum) {
    result_.clear();
    path_.clear();
    sum_ = sum;
    preorderTraverse(root);
    return result_;
  }
};

