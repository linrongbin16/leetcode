#include "BinaryTreeMaximumPathSum-124.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.maxPathSum(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {1, 2, 3};
  cout << s.maxPathSum(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {-10, 9, 20, INT_MIN, INT_MIN, 15, 7};
  cout << s.maxPathSum(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  int s4[] = {-3};
  cout << s.maxPathSum(createTree(s4, sizeof(s4) / sizeof(int))) << endl;

  int s5[] = {2, -1};
  cout << s.maxPathSum(createTree(s5, sizeof(s5) / sizeof(int))) << endl;

  int s6[] = {1, 2, INT_MIN, 3, INT_MIN, 4, INT_MIN, 5};
  cout << s.maxPathSum(createTree(s6, sizeof(s6) / sizeof(int))) << endl;

  return 0;
}
