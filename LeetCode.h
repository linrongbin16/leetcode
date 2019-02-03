#pragma once
#include <algorithm>
#include <cassert>
#include <cmath>
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
