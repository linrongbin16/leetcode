#include "SameTree-100.h"

int main(void) {
  Solution s;

  int sl1[] = {1}, sr1[] = {1};
  cout << s.isSameTree(createTree(sl1, sizeof(sl1) / sizeof(int)),
                       createTree(sr1, sizeof(sr1) / sizeof(int)))
       << endl;

  int sl2[] = {1, 2, 3, 4, 5}, sr2[] = {1, 2, 3, 4, 5};
  cout << s.isSameTree(createTree(sl2, sizeof(sl2) / sizeof(int)),
                       createTree(sr2, sizeof(sr2) / sizeof(int)))
       << endl;

  int sl3[] = {1, 2, 3, 4, 5, 6}, sr3[] = {1, 2, INT_MIN, 4, 5};
  cout << s.isSameTree(createTree(sl3, sizeof(sl3) / sizeof(int)),
                       createTree(sr3, sizeof(sr3) / sizeof(int)))
       << endl;

  return 0;
}
