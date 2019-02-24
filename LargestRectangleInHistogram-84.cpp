#include "LargestRectangleInHistogram-84.h"

int main(void) {
  Solution s;

  int s1[] = {1, 2, 3};
  vector<int> v1 = convertVector<int>(s1, sizeof(s1) / sizeof(int));
  cout << s.largestRectangleArea(v1) << endl;

  int s2[] = {2, 1, 5, 6, 2, 3};
  vector<int> v2 = convertVector<int>(s2, sizeof(s2) / sizeof(int));
  cout << s.largestRectangleArea(v2) << endl;

  return 0;
}
