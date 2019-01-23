#include "std.h"

class Solution {
public:
  int **createTable(int n) {
    int **f = new int *[n];
    for (int i = 0; i < n; i++) {
      f[i] = new int[n];
      memset(f[i], 0, n * sizeof(int));
    }
    return f;
  }

  void freeTable(int **f, int n) {
    for (int i = 0; i < n; i++) {
      delete[] f[i];
    }
    delete[] f;
  }

  int maxArea(vector<int> &height) {
    int n = height.size() + 1;
    int **f = createTable(n);
    freeTable(f, n);
    return 0;
  }
};

