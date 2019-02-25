#include "Combinations-77.h"

int main(void) {
  Solution s;

  dumpVector2D<int>(s.combine(4, 2));
  dumpVector2D<int>(s.combine(3, 3));
  dumpVector2D<int>(s.combine(1, 1));
  dumpVector2D<int>(s.combine(5, 4));

  return 0;
}
