#include "RotateList-61.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2}, k1 = 1;
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(s.rotateRight(l1, k1));

  int s2[] = {0, 1, 2, 3, 4, 5, 6}, k2 = 4;
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.rotateRight(l2, k2));

  int s3[] = {0}, k3 = 1;
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(s.rotateRight(l3, k3));

  int s4[] = {1, 1}, k4 = 3;
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.rotateRight(l4, k4));

  return 0;
}