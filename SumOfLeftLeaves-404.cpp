#include "SumOfLeftLeaves-404.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.sumOfLeftLeaves(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {1, 2, 3};
  cout << s.sumOfLeftLeaves(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {1, 2, 3, -1, -1, 6, 7};
  cout << s.sumOfLeftLeaves(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  return 0;
}