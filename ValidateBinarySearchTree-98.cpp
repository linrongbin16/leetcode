#include "ValidateBinarySearchTree-98.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.isValidBST(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {2, 1, 3};
  cout << s.isValidBST(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {5, 2, 7, 1, 3, 6, 8};
  cout << s.isValidBST(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  int s4[] = {10, 5, 15, INT_MIN, INT_MIN, 6, 20};
  cout << s.isValidBST(createTree(s4, sizeof(s4) / sizeof(int))) << endl;

  return 0;
}
