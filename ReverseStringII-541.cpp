#include "ReverseStringII-541.h"

int main(void) {
  Solution s;

  string s1 = "abcdefghijklmn";
  cout << s.reverseStr(s1, 2) << endl;
  cout << s.reverseStr(s1, 3) << endl;
  cout << s.reverseStr(s1, 4) << endl;

  string s2 = "abcdefg";
  cout << s.reverseStr(s2, 2) << endl;

  return 0;
}
