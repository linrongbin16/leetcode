#include "ReverseLinkedListII-206.h"

ListNode *insertTail(ListNode *l, int value) {
  ListNode *e = new ListNode(value);
  if (!l) {
    return e;
  }
  ListNode *p = l;
  while (p->next) {
    p = p->next;
  }
  p->next = e;
  return l;
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
    cout << l->val << " ";
    l = l->next;
  }
  cout << endl;
}

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(s.reverseList(l1));

  int s2[] = {0, 1, 2, 3, 4};
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.reverseList(l2));

  int s3[] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(s.reverseList(l3));

  pause();
  return 0;
}

