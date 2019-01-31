#include "std.h"

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
  ListNode *detectCycle(ListNode *head) {
    if (!head) {
      return NULL;
    }

    unordered_set<ListNode *> valueSet;
    while (head) {
      if (valueSet.find(head) != valueSet.end()) {
        return head;
      }
      valueSet.insert(head);
      head = head->next;
    }
    return NULL;
  }
};

