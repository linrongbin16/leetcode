#include "std.h"

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  bool hasCycle(ListNode *head) {
    if (!head) {
      return false;
    }

    unordered_set<ListNode *> valueSet;
    while (head) {
      if (valueSet.find(head) != valueSet.end()) {
        return true;
      }
      valueSet.insert(head);
      head = head->next;
    }
    return false;
  }
};

