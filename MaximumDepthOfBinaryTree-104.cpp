#include "MaximumDepthOfBinaryTree-104.h"

int main(void) {
  Solution s;

  int s1[] = {1, 2, 3};
  cout << s.maxDepth(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {0};
  cout << s.maxDepth(createTree(s2, 0)) << endl;

  int s3[] = {1, 2, 3, 4, INT_MIN, 6, INT_MIN};
  cout << s.maxDepth(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  int s4[] = {1};
  cout << s.maxDepth(createTree(s4, sizeof(s4) / sizeof(int))) << endl;

  int s5[] = {3, 9, 20, INT_MIN, INT_MIN, 15, 7};
  cout << s.maxDepth(createTree(s5, sizeof(s5) / sizeof(int))) << endl;

  return 0;
}
