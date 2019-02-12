/**
 * https://leetcode.com/problems/intersection-of-two-linked-lists/
 */

#include "LeetCode.h"

// TODO: not pass
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    if (!headA || !headB) {
      return NULL;
    }
    ListNode *p1 = headA, *p2 = headB;
    while (p1 != p2) {
      p1 = (p1->next == NULL) ? headA : p1->next;
      p2 = (p2->next == NULL) ? headB : p2->next;
    }
    return p1;
  }
};
