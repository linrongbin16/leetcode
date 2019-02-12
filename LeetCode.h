#pragma once
#include <algorithm>
#include <cassert>
#include <climits>
#include <cmath>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <list>
#include <map>
#include <set>
#include <string>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using namespace std;

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

/* ListNode */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createList(const int *s, int n) {
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

void dumpList(const ListNode *l) {
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

void dumpPointer(const Point &p) { cout << "(" << p.x << "," << p.y << ")"; }

void dumpPointerVector(const vector<Point> &pv) {
  cout << "dumpPointVector:";
  for (int i = 0; i < pv.size(); i++) {
    dumpPointer(pv[i]);
    if (i != pv.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

/* TreeNode */

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

TreeNode *createTreeNodeImpl(const int *s, int n, int pos) {
  TreeNode *e = new TreeNode(s[pos]);
  int lc = 2 * pos + 1;
  int rc = 2 * pos + 2;
  e->left = (lc < n && s[lc] >= 0) ? createTreeNodeImpl(s, n, lc) : NULL;
  e->right = (rc < n && s[rc] >= 0) ? createTreeNodeImpl(s, n, rc) : NULL;
  return e;
}

TreeNode *createTree(const int *s, int n) {
  if (n <= 0) {
    return NULL;
  }
  return createTreeNodeImpl(s, n, 0);
}

void dumpTreeImpl(const TreeNode *e) {
  if (!e) {
    return;
  }
  cout << "v:" << e->val
       << " left:" << ((e->left) ? to_string(e->left->val) : "nil")
       << " right:" << ((e->right) ? to_string(e->right->val) : "nil") << endl;
  dumpTreeImpl(e->left);
  dumpTreeImpl(e->right);
}

void dumpTree(const TreeNode *e) {
  cout << "dumpTree:" << endl;
  dumpTreeImpl(e);
  cout << endl;
}