#include "WordSearch-79.h"

int main(void) {
  Solution s;

  vector<vector<char>> v1 = {
      {'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
  cout << s.exist(v1, "ABCCED") << endl;
  cout << s.exist(v1, "SEE") << endl;
  cout << s.exist(v1, "ABCB") << endl;
  cout << s.exist(v1, "ABCD") << endl;
  return 0;
}
