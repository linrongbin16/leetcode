/**
 * https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/
 */

#include "LeetCode.h"

class Solution {
  TreeNode *create(vector<int> &inorder, vector<int> &postorder, int is, int ie,
                   int ps, int pe) {
    if (ps > pe) {
      return NULL;
    }
    int pos;
    TreeNode *node = new TreeNode(postorder[pe]);
    for (int i = is; i <= ie; i++) {
      if (inorder[i] == postorder[pe]) {
        pos = i;
        break;
      }
    }
    node->left = create(inorder, postorder, is, pos - 1, ps, ps + pos - is - 1);
    node->right =
        create(inorder, postorder, pos + 1, ie, ps + pos - is, pe - 1);
    return node;
  }

public:
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    return create(inorder, postorder, 0, inorder.size() - 1, 0,
                  postorder.size() - 1);
  }
};
