#include "SumRootToLeafNumbers-129.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.sumNumbers(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {1, 2, 3};
  cout << s.sumNumbers(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {4, 9, 0, 5, 1};
  cout << s.sumNumbers(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  return 0;
}
