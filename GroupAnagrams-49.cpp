#include "GroupAnagrams-49.h"

int main(void) {
  Solution s;

  vector<string> v1 = {"eat", "tea", "tan", "ate", "nat", "bat"};
  dumpVector2D<string>(s.groupAnagrams(v1));

  return 0;
}
