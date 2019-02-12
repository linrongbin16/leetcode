/**
 * https://leetcode.com/problems/reorder-list/
 */

#include "LeetCode.h"

class Solution {
public:
  void reorderList(ListNode *head) {
    if (!head || !head->next) {
      return;
    }
    vector<ListNode *> ptr;
    ListNode *p = head;
    while (p) {
      ptr.push_back(p);
      p = p->next;
    }
    p = head;
    for (int i = 0; i < ptr.size() / 2; i++) {
      ListNode *peer = ptr[ptr.size() - i - 1];
      peer->next = p->next;
      p->next = peer;
      p = peer->next;
    }
    p->next = NULL;
  }
};
