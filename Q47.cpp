//47)Permutations II
/*Given a collection of numbers, nums, that might contain duplicates, return all possible unique permutations in any order.*/
class Solution {
public:
    set<vector<int>> ans;

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        solve(nums, 0);
        vector<vector<int>> a;
        for (auto it : ans) {
            a.push_back(vector<int>(it.begin(), it.end()));
        }
        return a;
    }
    void solve(vector<int>& nums, int ind) {
        if (ind == nums.size()) {
            ans.insert(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {

            swap(nums[ind], nums[i]);
            solve(nums, ind + 1);
            swap(nums[ind], nums[i]);
        }
    }
};
