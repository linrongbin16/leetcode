/**
 * https://leetcode.com/problems/group-anagrams/
 */

#include "LeetCode.h"

class Solution {
  unordered_map<string, vector<string>> group_map;

  vector<vector<string>>
  parse(unordered_map<string, vector<string>> &group_map) {
    vector<vector<string>> result;
    for (auto iter = group_map.begin(); iter != group_map.end(); iter++) {
      result.push_back(iter->second);
    }
    return result;
  }

public:
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    group_map.clear();
    for (int i = 0; i < strs.size(); i++) {
      string tmp(strs[i]);
      sort(tmp.begin(), tmp.end());
      if (group_map.find(tmp) == group_map.end()) {
        group_map.insert(make_pair(tmp, vector<string>()));
      }
      group_map[tmp].push_back(strs[i]);
    }
    return parse(group_map);
  }
};
