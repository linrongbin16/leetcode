#include "NQueens-51.h"

void printResult(const vector<vector<string>> &r) {
  if (r.size() == 0) {
    cout << "empty" << endl << endl;
    return;
  }
  for (int i = 0; i < r.size(); i++) {
    for (int j = 0; j < r[i].size(); j++) {
      for (int k = 0; k < r[i][j].length(); k++) {
        cout << r[i][j][k];
      }
      cout << endl;
    }
    cout << endl;
  }
  cout << endl << endl;
}

int main(void) {
  Solution s;

  vector<vector<string>> r1 = s.solveNQueens(1);
  printResult(r1);

  vector<vector<string>> r2 = s.solveNQueens(2);
  printResult(r2);

  vector<vector<string>> r3 = s.solveNQueens(3);
  printResult(r3);

  vector<vector<string>> r4 = s.solveNQueens(4);
  printResult(r4);

  return 0;
}
