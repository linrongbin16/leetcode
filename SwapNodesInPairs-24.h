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
  ListNode *swapPairs(ListNode *head) {
    if (!head || !head->next) {
      return head;
    }
    ListNode *result = NULL, *tmp;
    while (head && head->next) {
      tmp = head->next->next;
      result = insertHead(result, head->next);
      result = insertHead(result, head);
      head = tmp;
    }
    while (head) {
      tmp = head->next;
      result = insertHead(result, head);
      head = tmp;
    }
    return reverseList(result);
  }
};