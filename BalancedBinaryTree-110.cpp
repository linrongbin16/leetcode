#include "BalancedBinaryTree-110.h"

int main(void) {
  Solution s;

  // int s1[] = {3, 9, 20, INT_MIN, INT_MIN, 15, 7};
  // cout << s.isBalanced(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  // int s2[] = {1, 2, 2, 3, 3, INT_MIN, INT_MIN, 4, 4};
  // cout << s.isBalanced(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {1, 2, 2, 3, INT_MIN, INT_MIN, 3, 4, INT_MIN, INT_MIN, 4};
  cout << s.isBalanced(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  return 0;
}
