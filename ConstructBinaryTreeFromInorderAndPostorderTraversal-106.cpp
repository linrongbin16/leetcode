#include "ConstructBinaryTreeFromInorderAndPostorderTraversal-106.h"

int main(void) {
  Solution s;

  int si1[] = {9, 3, 15, 20, 7}, sp1[] = {9, 15, 7, 20, 3};
  vector<int> vi1 = convertVector(si1, sizeof(si1) / sizeof(int));
  vector<int> vp1 = convertVector(sp1, sizeof(sp1) / sizeof(int));
  dumpTree(s.buildTree(vi1, vp1));

  return 0;
}

