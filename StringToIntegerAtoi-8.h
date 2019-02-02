#include "LeetCode.h"

class Solution {
public:
  bool isWhiteSpace(char c) { return c == ' '; }
  bool isPlus(char c) { return c == '+'; }
  bool isMinus(char c) { return c == '-'; }
  bool isDigit(char c) { return (int)c >= (int)'0' && (int)c <= (int)'9'; }

  int myAtoi(string str) {
    string result = "";
    for (int i = 0; i < str.length(); i++) {
      if (isWhiteSpace(str[i])) {
        if (result.length() > 0) {
          break;
        }
        continue;
      }
      if (isPlus(str[i]) || isMinus(str[i])) {
        if (result.length() > 0) {
          break;
        }
        result += str[i];
        continue;
      }
      if (!isDigit(str[i])) {
        break;
      }
      result += str[i];
    }

    long long ll = atoll(result.c_str());
    if (ll > (long long)INT_MAX) {
      return INT_MAX;
    }
    if (ll < (long long)INT_MIN) {
      return INT_MIN;
    }
    return (int)ll;
  }
};

