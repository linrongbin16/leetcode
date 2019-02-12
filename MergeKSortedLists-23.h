/**
 * https://leetcode.com/problems/merge-k-sorted-lists/
 */

#include "LeetCode.h"

class Solution {
  ListNode *popMinimum(vector<ListNode *> &lists) {
    int minval = INT_MAX, idx = -1;
    ListNode *s = NULL;
    for (int i = 0; i < lists.size(); i++) {
      if (lists[i] && minval > lists[i]->val) {
        minval = lists[i]->val;
        idx = i;
        s = lists[i];
      }
    }
    if (s) {
      lists[idx] = lists[idx]->next;
    }
    return s;
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

public:
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    ListNode *result = NULL, *p = NULL;
    while ((p = popMinimum(lists))) {
      result = insertHead(result, p);
    }
    return reverseList(result);
  }
};