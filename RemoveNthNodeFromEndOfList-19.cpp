#include "RemoveNthNodeFromEndOfList-19.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2, 3}, n1 = 3;
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(s.removeNthFromEnd(l1, n1));

  int s2[] = {0, 10, 2, 8, 3, 6}, n2 = 6;
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.removeNthFromEnd(l2, n2));

  int s3[] = {0, 10, 2, 8, -13, 7, 5, 6}, n3 = 1;
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(s.removeNthFromEnd(l3, n3));

  int s4[] = {1, 2}, n4 = 1;
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.removeNthFromEnd(l4, n4));

  return 0;
}
