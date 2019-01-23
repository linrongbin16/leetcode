#include "std.h"

class Solution {
public:
  bool isWhiteSpace(char c) { return c == ' '; }
  bool isPlusMinus(char c) { return c == '+' || c == '-'; }
  bool isPlus(char c) { return c == '+'; }
  bool isMinus(char c) { return c == '-'; }
  bool isDigit(char c) { return (int)c >= (int)'0' && (int)c <= (int)'9'; }

  int myAtoi(string str) {
    int result = 0;
    bool negative = false;
    bool startParsing = false;
    for (int i = 0; i < str.length(); i++) {
      if (isWhiteSpace(str[i])) {
        if (!startParsing) {
          continue;
        } else {
          break;
        }
      }

      startParsing = true;
      if (isPlusMinus(str[i])) {
        if (i - 1 >= 0 && isWhiteSpace(str[i - 1])) {
          if (isMinus(str[i])) {
            negative = true;
          }
        }
        if (i - 1 >= 0 && !isWhiteSpace(str[i - 1])) {
        }
      }
    }
    return result;
  }
};

