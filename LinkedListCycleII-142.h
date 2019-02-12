/**
 * https://leetcode.com/problems/linked-list-cycle-ii/
 */

#include "LeetCode.h"

class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if (!head) {
      return NULL;
    }
    ListNode *walk = head, *run = head, *entry = head;
    while (run->next != NULL && run->next->next != NULL) {
      walk = walk->next;
      run = run->next->next;
      if (walk == run) {
        while (walk != entry) {
          walk = walk->next;
          entry = entry->next;
        }
        return entry;
      }
    }
    return NULL;
  }
};
