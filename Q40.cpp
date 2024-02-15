//40) Combination Sum II
/*Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> a;
        vector<int> ds;
        sort(candidates.begin(), candidates.end());
        solve(0, a, candidates, ds, target);
        return a;
    }
    void solve(int ind, vector<vector<int>>& ans, vector<int>& arr,
               vector<int>& ds, int t) {

        if (t == 0) {
            
            ans.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++) {
            if (i > ind && arr[i] == arr[i - 1]) {
                continue;
            }
            if (t < arr[i]) {
                break;
            }
            ds.push_back(arr[i]);
            solve(i + 1, ans, arr, ds, t - arr[i]);
            ds.pop_back();
        }
    }
};
