#include "std.h"

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

