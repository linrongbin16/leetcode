#include "MaximumSubarray-53.h"

int main(void) {
  Solution s;

  int s1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  vector<int> v1 = convertVector(s1, sizeof(s1) / sizeof(int));
  cout << s.maxSubArray(v1) << endl;
  return 0;
}

