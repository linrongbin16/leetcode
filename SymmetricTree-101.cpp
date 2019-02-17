#include "SymmetricTree-101.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.isSymmetric(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {1, 2, 2, 3, 4, 4, 3};
  cout << s.isSymmetric(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {1, 2, 2, INT_MIN, 3, INT_MIN, 3};
  cout << s.isSymmetric(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  return 0;
}

