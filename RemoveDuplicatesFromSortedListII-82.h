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
    while (detectDup(head)) {
      head = removeDup(head);
    }
    if (!head || !head->next) {
      return head;
    }

    ListNode *p = head->next, *prev = head;
    while (p) {
      if (detectDup(p)) {
        p = removeDup(p);
        prev->next = p;
      } else {
        p = p->next;
        prev = prev->next;
      }
    }
    return head;
  }
};

