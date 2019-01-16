#include "std.h"

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

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
    ListNode *p1 = reverseList(l1), *p2 = reverseList(l2);
    ListNode *r = NULL;
    int add = 0, x;

    while (p1 && p2) {
      x = (add + p1->val + p2->val) % 10;
      add = (add + p1->val + p2->val) / 10;
      r = insertHead(r, x);
    }
    ListNode *p3 = p1 ? p1 : p2;
    while (p3) {
      x = (add + p3->val) % 10;
      add = (add + p3->val) / 10;
      r = insertHead(r, x);
    }
    return r;
  }
};

