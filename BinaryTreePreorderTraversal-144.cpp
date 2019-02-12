#include "BinaryTreePreorderTraversal-144.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  dumpVector(s.preorderTraversal(createTree(s1, sizeof(s1) / sizeof(int))));

  int s2[] = {1, 2, 3};
  dumpVector(s.preorderTraversal(createTree(s2, sizeof(s2) / sizeof(int))));

  int s3[] = {1, 2, 3, INT_MIN, INT_MIN, 6, 7};
  dumpVector(s.preorderTraversal(createTree(s3, sizeof(s3) / sizeof(int))));

  return 0;
}