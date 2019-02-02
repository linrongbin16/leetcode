#include "std.h"

class Solution {
public:
  bool hasCycle(ListNode *head) {
    if (!head) {
      return false;
    }
    ListNode *walk = head, *run = head;
    while (run->next != NULL && run->next->next != NULL) {
      walk = walk->next;
      run = run->next->next;
      if (walk == run) {
        return true;
      }
    }
    return false;
  }
};

