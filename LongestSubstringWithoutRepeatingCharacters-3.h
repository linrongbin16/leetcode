#include "std.h"

class Solution {
public:
  void dumpArray(int *s, int n) {
    cout << endl;
    for (int i = 0; i < n; i++) {
      cout << s[i] << ' ';
    }
    cout << endl;
  }

  int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int *f = new int[n + 1];
    memset(f, 0, (n + 1) * sizeof(int));
    unordered_map<char, int> posMap;

    f[0] = 1;
    posMap[s[0]] = 0;
    for (int i = 1; i < n; i++) {
      if (posMap.find(s[i]) == posMap.end()) {
        f[i] = f[i - 1] + 1;
      } else {
        auto lastPos = posMap.find(s[i]);
        f[i] = min(i - lastPos->second, f[i-1] + 1);
      }
      posMap[s[i]] = i;
    }

    int result = 0;
    for (int i = 0; i < n; i++) {
      result = max(result, f[i]);
    }
    dumpArray(f, n);
    delete[] f;
    return result;
  }
};

