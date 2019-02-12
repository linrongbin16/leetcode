/**
 * https://leetcode.com/problems/copy-list-with-random-pointer/
 */

#include "LeetCode.h"

// TODO: not pass
struct RandomListNode {
  int label;
  RandomListNode *next, *random;
  RandomListNode(int x) : label(x), next(NULL), random(NULL) {}
};

class Solution {
public:
  RandomListNode *copyRandomList(RandomListNode *head) {
    assert(head);
    return NULL;
  }
};
