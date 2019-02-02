#include "MergeTwoSortedLists-21.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2, 3}, s2[] = {0, 1, 2};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int)),
           *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.mergeTwoLists(l1, l2));

  int s3[] = {0, 1, 2, 3, 5, 9, 10, 13}, s4[] = {0, 1, 2, 2, 5, 7, 8};
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int)),
           *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.mergeTwoLists(l3, l4));

  return 0;
}

