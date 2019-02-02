#include "StringToIntegerAtoi-8.h"

int main(void) {
  Solution s;
  cout << s.myAtoi("42") << endl;
  cout << s.myAtoi("    -42") << endl;
  cout << s.myAtoi("4193 with words") << endl;
  cout << s.myAtoi("words and 873") << endl;
  cout << s.myAtoi("-91283472332") << endl;
  cout << s.myAtoi("   +0 123") << endl;
  pause();
  return 0;
}

