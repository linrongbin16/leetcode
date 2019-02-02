#include "AddTwoNumbers-2.h"

int main(void) {
  Solution s;
  ListNode *l1, *l2;

  int s1[] = {2, 4, 3};
  int s2[] = {5, 6, 4};
  l1 = createList(s1, 3);
  l2 = createList(s2, 3);
  dumpList(s.addTwoNumbers(l1, l2));

  int s3[] = {5};
  int s4[] = {5};
  l1 = createList(s3, 1);
  l2 = createList(s4, 1);
  dumpList(s.addTwoNumbers(l1, l2));

  return 0;
}

