#include "MinimumDepthOfBinaryTree-111.h"

int main(void) {
  Solution s;

  int s1[] = {1, 2, 3};
  cout << s.minDepth(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {0};
  cout << s.minDepth(createTree(s2, 0)) << endl;

  int s3[] = {1, 2, 3, -1, -1, 6, -1};
  cout << s.minDepth(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  return 0;
}
