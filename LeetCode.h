#pragma once
#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

/* ListNode */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

inline ListNode *createList(const int *s, int n) {
  ListNode *l = NULL, *p = NULL;
  for (int i = 0; i < n; i++) {
    ListNode *e = new ListNode(s[i]);
    if (!l) {
      l = e;
      p = e;
    } else {
      p->next = e;
      p = p->next;
    }
  }
  return l;
}

inline void dumpList(const ListNode *l) {
  cout << "dumpList:[";
  while (l) {
    cout << l->val;
    if (l->next) {
      cout << " ";
    }
    l = l->next;
  }
  cout << "]" << endl;
}

/* Pointer */

struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};

inline void dumpPointer(const Point &p) {
  cout << "(" << p.x << "," << p.y << ")";
}

/* TreeNode */

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

/* TreeLinkNode  */

struct TreeLinkNode {
  int val;
  TreeLinkNode *left, *right, *next;
  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
};

template <class T> inline T *createTreeNodeImpl(const int *s, int n, int pos) {
  T *e = new T(s[pos]);
  int lc = 2 * pos + 1;
  int rc = 2 * pos + 2;
  e->left =
      (lc < n && s[lc] > INT_MIN) ? createTreeNodeImpl<T>(s, n, lc) : NULL;
  e->right =
      (rc < n && s[rc] > INT_MIN) ? createTreeNodeImpl<T>(s, n, rc) : NULL;
  return e;
}

inline TreeNode *createTree(const int *s, int n) {
  if (n <= 0) {
    return NULL;
  }
  return createTreeNodeImpl<TreeNode>(s, n, 0);
}

inline TreeLinkNode *createLinkTree(const int *s, int n) {
  if (n <= 0) {
    return NULL;
  }
  return createTreeNodeImpl<TreeLinkNode>(s, n, 0);
}

inline void dumpTreeImpl(const TreeNode *e) {
  if (!e) {
    return;
  }
  cout << "val:" << e->val
       << " left:" << ((e->left) ? to_string(e->left->val) : "nil")
       << " right:" << ((e->right) ? to_string(e->right->val) : "nil") << endl;
  dumpTreeImpl(e->left);
  dumpTreeImpl(e->right);
}

inline void dumpTreeImpl(const TreeLinkNode *e) {
  if (!e) {
    return;
  }
  cout << "val:" << e->val
       << " next:" << ((e->next) ? to_string(e->next->val) : "nil")
       << " left:" << ((e->left) ? to_string(e->left->val) : "nil")
       << " right:" << ((e->right) ? to_string(e->right->val) : "nil") << endl;
  dumpTreeImpl(e->left);
  dumpTreeImpl(e->right);
}

template <class T> inline void dumpTree(const T *e) {
  cout << "dumpTree:" << endl;
  dumpTreeImpl(e);
  cout << endl;
}

/* Interval */

struct Interval {
  int start;
  int end;
  Interval() : start(0), end(0) {}
  Interval(int s, int e) : start(s), end(e) {}
};

inline void dumpInterval(const Interval &t) {
  cout << "(" << t.start << "," << t.end << ")";
}

/* vector */

template <class T> inline vector<T> convertVector(const T *s, int n) {
  vector<T> v;
  for (int i = 0; i < n; i++) {
    v.push_back(s[i]);
  }
  return v;
}

template <class T> inline void dumpVector2D(const vector<vector<T>> &s) {
  cout << "dumpVector2D:" << endl;
  for (int i = 0; i < s.size(); i++) {
    for (int j = 0; j < s[i].size(); j++) {
      cout << s[i][j];
      if (j < s[i].size() - 1) {
        cout << " ";
      }
    }
    cout << endl;
  }
  cout << endl;
}

template <class T> inline void dumpVector(const vector<T> &s) {
  cout << "dumpVector:[";
  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
    if (i < s.size() - 1) {
      cout << " ";
    }
  }
  cout << "]" << endl;
}

inline void dumpVector(const vector<Interval> &s) {
  cout << "dumpVector:[";
  for (int i = 0; i < s.size(); i++) {
    dumpInterval(s[i]);
    if (i < s.size() - 1) {
      cout << " ";
    }
  }
  cout << "]" << endl;
}

inline void dumpVector(const vector<Point> &s) {
  cout << "dumpVector:[";
  for (int i = 0; i < s.size(); i++) {
    dumpPointer(s[i]);
    if (i < s.size() - 1) {
      cout << " ";
    }
  }
  cout << "]" << endl;
}
