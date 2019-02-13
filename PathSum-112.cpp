#include "PathSum-112.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.hasPathSum(createTree(s1, sizeof(s1) / sizeof(int)), 1) << endl;
  cout << s.hasPathSum(createTree(s1, sizeof(s1) / sizeof(int)), 2) << endl;

  int s2[] = {1, 2, 3};
  cout << s.hasPathSum(createTree(s2, sizeof(s2) / sizeof(int)), 4) << endl;
  cout << s.hasPathSum(createTree(s2, sizeof(s2) / sizeof(int)), 3) << endl;

  int s3[] = {1, 2, 3, INT_MIN, INT_MIN, 6, 7};
  cout << s.hasPathSum(createTree(s3, sizeof(s3) / sizeof(int)), 3) << endl;
  cout << s.hasPathSum(createTree(s3, sizeof(s3) / sizeof(int)), 11) << endl;

  int s4[] = {1, 2};
  cout << s.hasPathSum(createTree(s4, sizeof(s4) / sizeof(int)), 1) << endl;

  return 0;
}
