#include "PopulatingNextRightPointersInEachNode-116.h"

int main(void) {
  Solution s;
  int s1[] = {1};
  TreeLinkNode *t1 = createLinkTree(s1, sizeof(s1) / sizeof(int));
  s.connect(t1);
  dumpTree(t1);

  int s2[] = {1, 2, 3};
  TreeLinkNode *t2 = createLinkTree(s2, sizeof(s2) / sizeof(int));
  s.connect(t2);
  dumpTree(t2);

  int s3[] = {1, 2, 3, 4, 5, 6, 7};
  TreeLinkNode *t3 = createLinkTree(s3, sizeof(s3) / sizeof(int));
  s.connect(t3);
  dumpTree(t3);

  return 0;
}
