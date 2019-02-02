#include "IntersectionOfTwoLinkedLists-160.h"

int main(void) {
  Solution s;
  int s1[] = {7, 1, 8, 4, 5}, s2[] = {5, 0, 1, 8, 4, 5};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int)),
           *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(s.getIntersectionNode(l1, l2));

  int s3[] = {0, 9, 1, 2, 4}, s4[] = {3, 2, 4};
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int)),
           *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(s.getIntersectionNode(l3, l4));

  return 0;
}

