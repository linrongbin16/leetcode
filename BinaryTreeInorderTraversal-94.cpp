#include "BinaryTreeInorderTraversal-94.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  dumpVector(s.inorderTraversal(createTree(s1, sizeof(s1) / sizeof(int))));

  int s2[] = {1, 2, 3, 4, 5, 6, 7};
  dumpVector(s.inorderTraversal(createTree(s2, sizeof(s2) / sizeof(int))));

  int s3[] = {1, INT_MIN, 2, 3};
  dumpVector(s.inorderTraversal(createTree(s3, sizeof(s3) / sizeof(int))));

  return 0;
}
