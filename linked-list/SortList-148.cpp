#include "SortList-148.h"

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
  int s1[] = {4, 2, 1, 3};
  ListNode *l1 = createList(s1, 4);
  dumpList(s.sortList(l1));
  int s2[] = {-1, 5, 3, 4, 0};
  ListNode *l2 = createList(s2, 5);
  dumpList(s.sortList(l2));
  pause();
  return 0;
}

