#include "LinkedListCycleII-142.h"

ListNode *insertTail(ListNode *l, int value) {
  if (!l) {
    ListNode *e = new ListNode(value);
    return e;
  }
  ListNode *result = l;
  while (l->next)
    l = l->next;
  l->next = new ListNode(value);
  return result;
}

ListNode *createList(int *s, int n) {
  ListNode *l = NULL;
  for (int i = 0; i < n; i++) {
    l = insertTail(l, s[i]);
  }
  return l;
}

void dumpList(ListNode *l) {
  cout << "dump:";
  while (l) {
    cout << l->val << ' ';
    l = l->next;
  }
  cout << endl;
}

int main(void) {
  Solution s;
  return 0;
}

