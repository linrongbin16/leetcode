#include "LeetCode.h"

class Solution {
  TreeNode *create(vector<int> &pre, vector<int> &post, int pres, int pree,
                   int posts, int poste) {
    if (pres > pree) {
      return NULL;
    }
    TreeNode *e = new TreeNode(pre[pres]);
    int pos = -1;
    for (int i = posts; i < poste; i++) {
      if (post[i] == pre[pres + 1]) {
        pos = i;
        break;
      }
    }

    e->left = (pos < 0) ? (NULL)
                        : create(pre, post, pres + 1, pres + 1 + pos - posts,
                                 posts, pos);
    e->right = (pos < 0) ? (NULL)
                         : create(pre, post, pres + 2 + pos - posts, pree,
                                  pos + 1, poste - 1);
    return e;
  }

public:
  TreeNode *constructFromPrePost(vector<int> &pre, vector<int> &post) {
    return create(pre, post, 0, pre.size() - 1, 0, post.size() - 1);
  }
};
