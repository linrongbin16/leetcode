#include "LeetCode.h"

class Solution {
  long nodeCount(int level) {
    level -= 1;
    return 1 << level;
  }

public:
  void connect(TreeLinkNode *root) {
    if (!root) {
      return;
    }
    queue<TreeLinkNode *> q;
    q.push(root);
    int level = 1;
    long count = 0;
    TreeLinkNode *prev = NULL, *current = NULL;

    while (!q.empty()) {
      current = q.front();
      q.pop();
      count++;
      long nc = nodeCount(level);
      if (count > 1 && count <= nc && prev && current) {
        prev->next = current;
      }
      q.push(current->left);
      q.push(current->right);
      if (count >= nc) {
        count = 0;
        level++;
      }
      prev = current;
    } // while
  }
};
