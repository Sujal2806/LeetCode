//39)Combination Sum
/*Given an array of distinct integers candidates and a target integer target, return a list of all unique combinations of candidates where the chosen numbers sum to target.
You may return the combinations in any order.*/

using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> a;
        vector<int> ds;
        ans(0, target, candidates, a, ds);
        return a;
    }
    void ans(int i, int t, vector<int>& arr, vector<vector<int>>& a,
             vector<int>& ds) {
        if (i == arr.size()) {
            if (t == 0) {
                a.push_back(ds);
            }
            return;
        }
        if (arr[i] <= t) {
            ds.push_back(arr[i]);
            ans(i, t - arr[i], arr, a, ds);
            ds.pop_back();
        }
        ans(i + 1, t, arr, a, ds);
    }
};
