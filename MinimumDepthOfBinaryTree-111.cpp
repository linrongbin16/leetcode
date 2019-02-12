#include "MinimumDepthOfBinaryTree-111.h"

int main(void) {
  Solution s;

  int s1[] = {1, 2, 3};
  cout << s.minDepth(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {0};
  cout << s.minDepth(createTree(s2, 0)) << endl;

  int s3[] = {1, 2, 3, 4, -1, 6, -1};
  cout << s.minDepth(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  int s4[] = {1};
  cout << s.minDepth(createTree(s4, sizeof(s4) / sizeof(int))) << endl;

  int s5[] = {3, 9, 20, -1, -1, 15, 7};
  cout << s.minDepth(createTree(s5, sizeof(s5) / sizeof(int))) << endl;

  return 0;
}
