#include "ReverseString-344.h"

int main(void) {
  Solution s;

  vector<char> v1 = {'h', 'e', 'l', 'l', 'o'};
  s.reverseString(v1);
  dumpVector(v1);

  vector<char> v2 = {'h', 'a', 'n', 'n', 'a', 'h'};
  s.reverseString(v2);
  dumpVector(v2);

  return 0;
}
