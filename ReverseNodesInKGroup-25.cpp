#include "ReverseNodesInKGroup-25.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2}, k1 = 2;
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(s.reverseKGroup(l1, k1));

  int s2[] = {0, 1, 2, 3, 4, 5, 6}, k2 = 4;
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.reverseKGroup(l2, k2));

  int s3[] = {0}, k3 = 1;
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(s.reverseKGroup(l3, k3));

  int s4[] = {1, 1}, k4 = 3;
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.reverseKGroup(l4, k4));

  int s5[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, k5 = 3;
  ListNode *l5 = createList(s5, sizeof(s5) / sizeof(int));
  dumpList(s.reverseKGroup(l5, k5));

  int s6[] = {1, 2, 3, 4, 5}, k6 = 3;
  ListNode *l6 = createList(s6, sizeof(s6) / sizeof(int));
  dumpList(s.reverseKGroup(l6, k6));

  return 0;
}