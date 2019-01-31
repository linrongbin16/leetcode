#include "std.h"

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
  ListNode *insertHead(ListNode *l, ListNode *e) {
    e->next = l;
    return e;
  }

public:
  ListNode *reverseList(ListNode *head) {
    ListNode *l = NULL;
    while (head) {
      l = insertHead(l, head);
      head = head->next;
    }
    return l;
  }
};

