#include "leetcode2.h"

ListNode *createList(int *s, int n) {
  ListNode *l = new ListNode(s[0]);
  ListNode *p = l;
  for (int i = 1; i < n; i++) {
    p->next = new ListNode(s[i]);
    p = p->next;
  }
  return l;
}

void dumpList(ListNode *l) {
  cout << endl << "[ ";
  while (l) {
    cout << l->val << " ";
  }
  cout << "]";
}

int main(void) {
  Solution s;

  int s1[] = {2, 4, 3};
  int s2[] = {5, 6, 4};
  ListNode *l1 = createList(s1, 3), *l2 = createList(s2, 3);
  dumpList(s.addTwoNumbers(l1, l2));

  return 0;
}

