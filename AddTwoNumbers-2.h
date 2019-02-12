/**
 * https://leetcode.com/problems/add-two-numbers/
 */

#include "LeetCode.h"

class Solution {
public:
  ListNode *insertHead(ListNode *l, int x) {
    ListNode *e = new ListNode(x);
    e->next = l;
    return e;
  }

  ListNode *reverseList(ListNode *l) {
    ListNode *p = NULL;
    while (l) {
      p = insertHead(p, l->val);
      l = l->next;
    }
    return p;
  }

  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *p1 = l1, *p2 = l2;
    ListNode *r = NULL;
    int add = 0, x;

    while (p1 && p2) {
      x = (add + p1->val + p2->val) % 10;
      add = (add + p1->val + p2->val) / 10;
      r = insertHead(r, x);
      p1 = p1->next;
      p2 = p2->next;
    }
    ListNode *p3 = p1 ? p1 : p2;
    while (p3) {
      x = (add + p3->val) % 10;
      add = (add + p3->val) / 10;
      r = insertHead(r, x);
      p3 = p3->next;
    }
    if (add != 0) {
      r = insertHead(r, add);
    }
    return reverseList(r);
  }
};
