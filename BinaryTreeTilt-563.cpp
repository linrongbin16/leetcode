#include "BinaryTreeTilt-563.h"

int main(void) {
  Solution s;

  int s1[] = {1};
  cout << s.findTilt(createTree(s1, sizeof(s1) / sizeof(int))) << endl;

  int s2[] = {1, 2, 3};
  cout << s.findTilt(createTree(s2, sizeof(s2) / sizeof(int))) << endl;

  int s3[] = {1, 2, 3, 4, 5, 6, 7};
  cout << s.findTilt(createTree(s3, sizeof(s3) / sizeof(int))) << endl;

  int s4[] = {1, 2, 3, 4, INT_MIN, 5};
  cout << s.findTilt(createTree(s4, sizeof(s4) / sizeof(int))) << endl;

  return 0;
}
