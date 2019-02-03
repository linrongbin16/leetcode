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
  ListNode *reverseKGroup(ListNode *head, int k) {
    if (!head || !head->next) {
      return head;
    }
    vector<ListNode *> group;
    while (head) {
      int cnt = 0;
      ListNode *p = NULL, *tmp;
      while (cnt < k) {
        tmp = head->next;
        p = insertHead(p, head);
        head = tmp;
        cnt++;
      }
      p = reverseList(p);
      group.push_back(p);
    }
    ListNode *result = NULL, *tail = NULL;
    for (int i = 0; i < group.size(); i++) {
      ListNode *p = group[i], *tmp;
      while (p) {
        tmp = p->next;
        result = insertHead(result, p);
        p = tmp;
      }
    }
    return result;
  }
};