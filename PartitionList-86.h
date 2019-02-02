#include "LeetCode.h"

class Solution {
  ListNode *insertHead(ListNode *l, ListNode *e) {
    e->next = l;
    return e;
  }

  ListNode *reverse(ListNode *l) {
    if (!l || !l->next) {
      return l;
    }
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
  ListNode *partition(ListNode *head, int x) {
    if (!head || !head->next) {
      return head;
    }
    ListNode *small = NULL, *big = NULL, *p, *tail = NULL;
    head = reverse(head);
    while (head) {
      p = head->next;
      if (head->val < x) {
        small = insertHead(small, head);
        if (!tail) {
          tail = small;
        }
      } else {
        big = insertHead(big, head);
      }
      head = p;
    }
    if (tail) {
      tail->next = big;
      return small;
    } else {
      return big;
    }
  }
};

