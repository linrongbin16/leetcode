#include "PalindromeNumber-9.h"

int main(void) {
  Solution s;
  cout << s.isPalindrome(0) << endl;
  cout << s.isPalindrome(121) << endl;
  cout << s.isPalindrome(-121) << endl;
  cout << s.isPalindrome(10) << endl;
  cout << s.isPalindrome(-2147483648) << endl;
  return 0;
}

