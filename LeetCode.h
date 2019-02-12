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

template <class T> inline vector<T> convertVector(T *s, int n) {
  vector<T> v;
  for (int i = 0; i < n; i++) {
    v.push_back(s[i]);
  }
  return v;
}

template <class T> inline void dumpVector2D(const vector<vector<T>> &s) {
  cout << "dump:" << endl;
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
  cout << "dump:" << endl;
  for (int i = 0; i < s.size(); i++) {
    cout << s[i];
    if (i < s.size() - 1) {
      cout << " ";
    }
  }
  cout << endl;
}

/* ListNode */

struct ListNode {
  int val;
  ListNode *next;
  ListNode(int x) : val(x), next(NULL) {}
};

ListNode *createList(int *s, int n) {
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

void dumpList(ListNode *l) {
  cout << "dump:[";
  while (l) {
    cout << l->val;
    if (l->next) {
      cout << " ";
    }
    l = l->next;
  }
  cout << "]" << endl;
}

/* 2D Pointer */

struct Point {
  int x;
  int y;
  Point() : x(0), y(0) {}
  Point(int a, int b) : x(a), y(b) {}
};
