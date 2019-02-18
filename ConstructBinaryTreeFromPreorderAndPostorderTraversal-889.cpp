#include "ConstructBinaryTreeFromPreorderAndPostorderTraversal-889.h"

int main(void) {
  Solution s;

  int pre1[] = {1, 2, 4, 5, 3, 6, 7}, post1[] = {4, 5, 2, 6, 7, 3, 1};
  vector<int> vpre1 = convertVector(pre1, sizeof(pre1) / sizeof(int));
  vector<int> vpost1 = convertVector(post1, sizeof(post1) / sizeof(int));
  dumpTree(s.constructFromPrePost(vpre1, vpost1));

  return 0;
}
