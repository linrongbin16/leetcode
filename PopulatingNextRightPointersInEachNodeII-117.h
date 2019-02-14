/**
 * https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/
 */

#include "LeetCode.h"

class Solution {
public:
  void connect(TreeLinkNode *root) {
    TreeLinkNode dummyHead(0);
    for (; root; root = dummyHead.next, dummyHead.next = NULL) {
      for (TreeLinkNode *level = root, *last = &dummyHead; level;
           level = level->next) {
        if (level->left) {
          last->next = level->left;
          last = last->next;
        }
        if (level->right) {
          last->next = level->right;
          last = last->next;
        }
      }
    }
  }
};

