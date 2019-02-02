#include "LeetCode.h"

class Solution {
  bool detectDup(ListNode *e) { return e && e->next && e->val == e->next->val; }

  ListNode *removeDup(ListNode *l) {
    if (!l || !l->next) {
      return l;
    }
    ListNode *p = l->next;
    while (p && p->val == l->val) {
      p = p->next;
    }
    return p;
  }

public:
  ListNode *deleteDuplicates(ListNode *head) {
    if (!head || !head->next) {
      return head;
    }
    ListNode *p = head;
    while (p) {
      while (detectDup(p)) {
        p->next = p->next->next;
      }
      p = p->next;
    }
    return head;
  }
};

