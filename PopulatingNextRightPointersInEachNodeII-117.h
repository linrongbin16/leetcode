#include "LeetCode.h"

// TODO: use O(n) memory
class Solution {
  unordered_map<int, vector<TreeLinkNode *>> levelMap_;
  int level_;
  int maxLevel_;

  void preorderTraverse(TreeLinkNode *e) {
    if (!e) {
      return;
    }
    level_++;
    maxLevel_ = max(maxLevel_, level_);
    vector<TreeLinkNode *> traverseOrder;
    if (levelMap_.find(level_) != levelMap_.end()) {
      traverseOrder = levelMap_[level_];
    }
    traverseOrder.push_back(e);
    levelMap_[level_] = traverseOrder;
    preorderTraverse(e->left);
    preorderTraverse(e->right);
    level_--;
  }

public:
  void connect(TreeLinkNode *root) {
    if (!root) {
      return;
    }
    levelMap_.clear();
    level_ = 0;
    maxLevel_ = 0;
    preorderTraverse(root);

    for (auto i = levelMap_.begin(); i != levelMap_.end(); i++) {
      vector<TreeLinkNode *> traverseOrder = i->second;
      for (int j = 0; j < traverseOrder.size(); j++) {
        if (j + 1 < traverseOrder.size()) {
          traverseOrder[j]->next = traverseOrder[j + 1];
        }
      }
    }
  }
};