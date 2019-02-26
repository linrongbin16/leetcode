#include "NQueens-51.h"

int main(void) {
  Solution s;

  dumpVector2D(s.solveNQueens(1));
  dumpVector2D(s.solveNQueens(2));
  dumpVector2D(s.solveNQueens(3));
  dumpVector2D(s.solveNQueens(4));
  dumpVector2D(s.solveNQueens(5));

  return 0;
}
