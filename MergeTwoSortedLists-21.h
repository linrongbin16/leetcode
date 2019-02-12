/**
 * https://leetcode.com/problems/merge-two-sorted-lists/
 */

#include "LeetCode.h"

class Solution {
  ListNode *insertHead(ListNode *l, ListNode *e) {
    e->next = l;
    return e;
  }

  ListNode *reverseList(ListNode *l) {
    ListNode *result = NULL;
    ListNode *p;
    while (l) {
      p = l->next;
      result = insertHead(result, l);
      l = p;
    }
    return result;
  }

public:
  ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
    ListNode *l = NULL, *p, *q;
    l1 = reverseList(l1);
    l2 = reverseList(l2);
    while (l1 && l2) {
      if (l1->val > l2->val) {
        p = l1;
        q = p->next;
        l = insertHead(l, p);
        l1 = q;
      } else {
        p = l2;
        q = p->next;
        l = insertHead(l, p);
        l2 = q;
      }
    }
    while (l1) {
      p = l1->next;
      l = insertHead(l, l1);
      l1 = p;
    }
    while (l2) {
      p = l2->next;
      l = insertHead(l, l2);
      l2 = p;
    }
    return l;
  }
};
