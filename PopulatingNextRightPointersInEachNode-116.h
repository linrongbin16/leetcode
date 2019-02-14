#include "LeetCode.h"

class Solution {
  long nodeCount(int level) {
    level -= 1;
    return 2 << level;
  }

public:
  void connect(TreeLinkNode *root) {
    if (!root) {
      return;
    }
    queue<TreeLinkNode *> q;
    q.push(root);
    int level = 1;
    int count = 0;
    TreeLinkNode *prev = NULL, *current = NULL;

    while (!q.empty()) {
      current = q.back();
      count++;

      

      if (current->left) {
        q.push(current->left);
      }
      if (current->right) {
        q.push(current->right);
      }
      prev = current;
    } // while
  }
};