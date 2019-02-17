#include "ConstructBinaryTreeFromPreorderAndInorderTraversal-105.h"

int main(void) {
  Solution s;

  int sp1[] = {1, 2, 4, 5, 3, 6, 7}, si1[] = {4, 2, 5, 1, 6, 3, 7};
  vector<int> vp1 = convertVector(sp1, sizeof(sp1) / sizeof(int));
  vector<int> vi1 = convertVector(si1, sizeof(si1) / sizeof(int));
  dumpTree(s.buildTree(vp1, vi1));

  return 0;
}

