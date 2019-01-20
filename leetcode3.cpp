#include "leetcode3.h"

void pause() {
  int x;
  cin >> x;
}


int main(void) {
  Solution s;
  cout << s.lengthOfLongestSubstring("abcabcbb") << endl;
  cout << s.lengthOfLongestSubstring("bbbbb") << endl;
  cout << s.lengthOfLongestSubstring("pwwkew") << endl;
  pause();
  return 0;
}

