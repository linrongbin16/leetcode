#include "ReverseWordsInAStringIII-557.h"

int main(void) {
  Solution s;

  string s1 = "the sky is blue";
  s.reverseWords(s1);
  cout << s1 << endl;

  string s2 = " the    sky \t is\nblue ";
  s.reverseWords(s2);
  cout << s2 << endl;

  return 0;
}
