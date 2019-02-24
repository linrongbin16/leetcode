#include "MergeKSortedLists-23.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2};
  int s2[] = {1, 3, 4};
  int s3[] = {5, 6};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));

  vector<ListNode *> v = {l1, l2, l3};
  dumpList(s.mergeKLists(v));

  return 0;
}
