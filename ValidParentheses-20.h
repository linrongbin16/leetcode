/**
 * https://leetcode.com/problems/valid-parentheses/
 */

#include "LeetCode.h"

class Solution {
public:
  bool isValid(string s) {
    if (s.length() <= 0) {
      return true;
    }
    stack<char> stk;
    for (int i = 0; i < s.length(); i++) {
      if (stk.empty()) {
        stk.push(s[i]);
      } else {
        switch (s[i]) {
        case ')':
          if (stk.top() == '(') {
            stk.pop();
          } else {
            stk.push(s[i]);
          }
          break;
        case ']':
          if (stk.top() == '[') {
            stk.pop();
          } else {
            stk.push(s[i]);
          }
          break;
        case '}':
          if (stk.top() == '{') {
            stk.pop();
          } else {
            stk.push(s[i]);
          }
          break;
        default:
          stk.push(s[i]);
          break;
        }
      }
    }
    return stk.empty();
  }
};
