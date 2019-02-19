/**
 * https://leetcode.com/problems/evaluate-reverse-polish-notation/
 */

#include "LeetCode.h"

class Solution {
  bool isInteger(string token) {
    return token.length() > 1 || isdigit(token[0]);
  }

  bool isOperator(string token) {
    return token.length() == 1 && !isdigit(token[0]);
  }

public:
  int evalRPN(vector<string> &tokens) {
    stack<int> stk;
    for (int i = 0; i < tokens.size(); i++) {
      if (isInteger(tokens[i])) {
        stk.push(stoi(tokens[i]));
      } else {
        int b = stk.top();
        stk.pop();
        int a = stk.top();
        stk.pop();
        switch (tokens[i][0]) {
        case '+':
          stk.push(a + b);
          break;
        case '-':
          stk.push(a - b);
          break;
        case '*':
          stk.push(a * b);
          break;
        case '/':
          stk.push(a / b);
          break;
        default:
          break;
        }
      }
    }
    return stk.top();
  }
};
