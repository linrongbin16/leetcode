#include "RemoveDuplicatesFromSortedListII-82.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2, 3};
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  dumpList(l1);
  dumpList(s.deleteDuplicates(l1));
  cout << endl;

  int s2[] = {0, 10, 2, 2, 8, 3, 6, 6};
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  dumpList(l2);
  dumpList(s.deleteDuplicates(l2));
  cout << endl;

  int s3[] = {0, 0, 10, 2, 8, -13, 7, 5, 6};
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  dumpList(l3);
  dumpList(s.deleteDuplicates(l3));
  cout << endl;

  int s4[] = {1, 1};
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  dumpList(l4);
  dumpList(s.deleteDuplicates(l4));
  cout << endl;

  return 0;
}

