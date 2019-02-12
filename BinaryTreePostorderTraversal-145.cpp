#include "BinaryTreePostorderTraversal-145.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  dumpVector(s.postorderTraversal(createTree(s1, sizeof(s1) / sizeof(int))));

  int s2[] = {1, 2, 3};
  dumpVector(s.postorderTraversal(createTree(s2, sizeof(s2) / sizeof(int))));

  int s3[] = {1, 2, 3, INT_MIN, INT_MIN, 6, 7};
  dumpVector(s.postorderTraversal(createTree(s3, sizeof(s3) / sizeof(int))));

  int s4[] = {1, 2, 3, INT_MIN, INT_MIN, INT_MIN, 7};
  dumpVector(s.postorderTraversal(createTree(s4, sizeof(s4) / sizeof(int))));

  return 0;
}
