#include "std.h"

class Solution {
public:
  ListNode *ll = new ListNode(0);

  ListNode *merge(ListNode *l1, ListNode *l2) {
    ListNode *p = ll;

    while (l1 != NULL && l2 != NULL) {
      if (l1->val < l2->val) {
        p->next = l1;
        l1 = l1->next;
      } else {
        p->next = l2;
        l2 = l2->next;
      }
      p = p->next;
    }

    if (l1 != NULL)
      p->next = l1;

    if (l2 != NULL)
      p->next = l2;

    p = ll->next;
    ll->next = NULL;
    return p;
  }

  ListNode *sortList(ListNode *head) {
    if (!head || !head->next) {
      return head;
    }
    ListNode *p = NULL, *slow = head, *fast = head;
    while (fast != NULL && fast->next != NULL) {
      p = slow;
      slow = slow->next;
      fast = fast->next->next;
    }
    p->next = NULL;

    ListNode *l1 = sortList(head);
    ListNode *l2 = sortList(slow);
    return merge(l1, l2);
  }
};

