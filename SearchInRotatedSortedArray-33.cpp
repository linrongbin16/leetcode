#include "SearchInRotatedSortedArray-33.h"

int main(void) {
  Solution s;

  vector<int> v1 = {1, 2, 3};
  cout << s.search(v1, 3) << endl;

  vector<int> v2 = {4, 5, 6, 7, 0, 1, 2};
  cout << s.search(v2, 0) << endl;

  vector<int> v3 = {4, 5, 6, 7, 0, 1, 2};
  cout << s.search(v3, 3) << endl;

  vector<int> v4 = {3, 1};
  cout << s.search(v4, 3) << endl;

  return 0;
}
