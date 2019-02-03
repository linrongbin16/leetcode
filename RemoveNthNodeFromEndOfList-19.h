#include "LeetCode.h"

class Solution {
  ListNode *insertHead(ListNode *l, ListNode *e) {
    e->next = l;
    return e;
  }

  ListNode *reverseList(ListNode *l) {
    ListNode *result = NULL, *p;
    while (l) {
      p = l->next;
      result = insertHead(result, l);
      l = p;
    }
    return result;
  }

public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *result, *p, *prev;
    if (n <= 0) {
      return head;
    }
    head = reverseList(head);
    if (n == 1) {
      head = head->next;
      return reverseList(head);
    }
    prev = head;
    p = head->next;
    for (int i = 0; i < n - 2; i++) {
      p = p->next;
      prev = prev->next;
    }
    prev->next = p->next;
    return reverseList(head);
  }
};