#include "LeetCode.h"

class Solution {
  int listLength(ListNode *l) {
    int n = 0;
    while (l) {
      l = l->next;
      n++;
    }
    return n;
  }

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

  ListNode *listTail(ListNode *l) {
    if (!l || !l->next) {
      return l;
    }
    while (l->next) {
      l = l->next;
    }
    return l;
  }

public:
  ListNode *rotateRight(ListNode *head, int k) {
    if (!head || !head->next) {
      return head;
    }
    int n = listLength(head);
    ListNode *result = reverseList(head);
    ListNode *tail = listTail(result);
    ListNode *p;
    k %= n;
    for (int i = 0; i < k; i++) {
      p = result->next;
      result->next = NULL;
      tail->next = result;
      tail = tail->next;
      result = p;
    }
    return reverseList(result);
  }
};