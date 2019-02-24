#include "ValidParentheses-20.h"

int main(void) {
  Solution s;
  cout << s.isValid("()") << endl;
  cout << s.isValid("()[]") << endl;
  cout << s.isValid("()[{(}])") << endl;
  cout << s.isValid("(])") << endl;
  return 0;
}
