#include "SwapNodesInPairs-24.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(s.swapPairs(l1));

  int s2[] = {0, 1, 2, 3, 4, 5, 6};
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.swapPairs(l2));

  int s3[] = {0};
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(s.swapPairs(l3));

  int s4[] = {1, 1};
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.swapPairs(l4));

  return 0;
}