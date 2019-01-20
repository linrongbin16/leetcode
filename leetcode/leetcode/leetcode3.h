#include "std.h"

class Solution {
public:
  int lengthOfLongestSubstring(string s) {
    int n = s.length();
    int *f = new int[n + 1];
    memset(f, 0, (n + 1) * sizeof(int));

    unordered_map<char, int> posMap;
    unordered_set<char> charSet;

    f[0] = 1;
    posMap.insert(make_pair(s[0], 0));
    charSet.insert(s[0]);

    for (int i = 1; i < n; i++) {
      if (charSet.find(s[i]) == charSet.end()) {
        f[i] = f[i - 1] + 1;
        posMap.insert(make_pair(s[i], i));
        charSet.insert(s[i]);
      } else {
        auto lastPos = posMap.find(s[i]);
        f[i] = i - lastPos->second;
        posMap.erase(lastPos);
        posMap.insert(make_pair(s[i], i));
        for (int j = lastPos->second; j < i; j++) {
          charSet.erase(charSet.find(s[j]));
        }
      }
    }

    int result = f[n - 1];
    delete[] f;
    return result;
  }
};

