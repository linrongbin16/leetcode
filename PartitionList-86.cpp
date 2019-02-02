#include "PartitionList-86.h"

int main(void) {
  Solution s;

  int s1[] = {0, 1, 2, 3}, x1 = 2;
  ListNode *l1 = createList(s1, sizeof(s1) / sizeof(int));
  cout << "x1:" << x1 << " ";
  dumpList(l1);
  dumpList(s.partition(l1, x1));
  cout << endl;

  int s2[] = {0, 10, 2, 8, 3, 6, 4, 5}, x2 = 3;
  ListNode *l2 = createList(s2, sizeof(s2) / sizeof(int));
  cout << "x2:" << x2 << " ";
  dumpList(l2);
  dumpList(s.partition(l2, x2));
  cout << endl;

  int s3[] = {0, 10, 2, 8, -13, 7, 5, 6}, x3 = 4;
  ListNode *l3 = createList(s3, sizeof(s3) / sizeof(int));
  cout << "x3:" << x3 << " ";
  dumpList(l3);
  dumpList(s.partition(l3, x3));
  cout << endl;

  int s4[] = {1, 1}, x4 = 0;
  ListNode *l4 = createList(s4, sizeof(s4) / sizeof(int));
  cout << "x4:" << x4 << " ";
  dumpList(l4);
  dumpList(s.partition(l4, x4));
  cout << endl;

  pause();
  return 0;
}

