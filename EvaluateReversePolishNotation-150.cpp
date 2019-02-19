#include "EvaluateReversePolishNotation-150.h"

int main(void) {
  Solution s;

  string s1[] = {"2", "1", "+", "3", "*"};
  vector<string> v1 = convertVector(s1, 5);
  cout << s.evalRPN(v1) << endl;

  string s2[] = {"4", "13", "5", "/", "+"};
  vector<string> v2 = convertVector(s2, 5);
  cout << s.evalRPN(v2) << endl;

  string s3[] = {"10", "6", "9",  "3", "+", "-11", "*",
                 "/",  "*", "17", "+", "5", "+"};
  vector<string> v3 = convertVector(s3, 13);
  cout << s.evalRPN(v3) << endl;

  return 0;
}
