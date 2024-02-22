//49)Group Anagrams
/*Given an array of strings strs, group the anagrams together. You can return the answer in any order.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<vector<string>> ans;
        map<string, vector<string>> m;
        for (string s : strs) {
            string x = s;
            sort(x.begin(), x.end());
            m[x].push_back(s);
        }
        for (auto it : m) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
