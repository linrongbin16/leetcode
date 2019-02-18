/**
 * https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/
 */

#include "LeetCode.h"

class Solution {
  TreeNode *create(vector<int> &preorder, vector<int> &inorder, int ps, int pe,
                   int is, int ie) {
    if (ps > pe) {
      return NULL;
    }
    int pos = -1;
    TreeNode *e = new TreeNode(preorder[ps]);
    for (int i = is; i <= ie; i++) {
      if (inorder[i] == preorder[ps]) {
        pos = i;
        break;
      }
    }
    e->left = create(preorder, inorder, ps + 1, ps + pos - is, is, pos - 1);
    e->right = create(preorder, inorder, ps + pos - is + 1, pe, pos + 1, ie);
    return e;
  }

public:
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
    return create(preorder, inorder, 0, preorder.size() - 1, 0,
                  inorder.size() - 1);
  }
};
