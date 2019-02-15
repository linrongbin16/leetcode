
#include "BinaryTreeLevelOrderTraversalII-107.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  dumpVector2D(s.levelOrderBottom(createTree(s1, sizeof(s1) / sizeof(int))));

  int s2[] = {1, 2, 3};
  dumpVector2D(s.levelOrderBottom(createTree(s2, sizeof(s2) / sizeof(int))));

  int s3[] = {3, 9, 20, INT_MIN, INT_MIN, 15, 7};
  dumpVector2D(s.levelOrderBottom(createTree(s3, sizeof(s3) / sizeof(int))));

  return 0;
}
