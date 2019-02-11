#include "JumpGame-55.h"

int main(void) {
  Solution s;

  int s1[] = {2, 3, 1, 1, 4};
  vector<int> v1 = convertVector(s1, sizeof(s1) / sizeof(int));
  cout << s.canJump(v1) << endl;

  int s2[] = {3, 2, 1, 0, 4};
  vector<int> v2 = convertVector(s2, sizeof(s2) / sizeof(int));
  cout << s.canJump(v2) << endl;
  return 0;
}
