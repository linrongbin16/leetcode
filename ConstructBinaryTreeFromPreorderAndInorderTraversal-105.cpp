#include "ConstructBinaryTreeFromPreorderAndInorderTraversal-105.h"

int main(void) {
  Solution s;

  int sp1[] = {1, 2, 4, 5, 3, 6, 7}, si1[] = {4, 2, 5, 1, 6, 3, 7};
  vector<int> vp1 = convertVector(sp1, sizeof(sp1) / sizeof(int));
  vector<int> vi1 = convertVector(si1, sizeof(si1) / sizeof(int));
  dumpTree(s.buildTree(vp1, vi1));

  int sp2[] = {3, 9, 20, 15, 7}, si2[] = {9, 3, 15, 20, 7};
  vector<int> vp2 = convertVector(sp2, sizeof(sp2) / sizeof(int));
  vector<int> vi2 = convertVector(si2, sizeof(si2) / sizeof(int));
  dumpTree(s.buildTree(vp2, vi2));

  return 0;
}
