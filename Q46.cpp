//46)Permutations
/*Given an array nums of distinct integers, return all the possible permutations.
You can return the answer in any order.*/\

using namespace std;
class Solution {
public:
    vector<vector<int>> ans;

    vector<vector<int>> permute(vector<int>& nums) {
        solve(nums, 0);
        return ans;
    }
    void solve(vector<int>& nums, int ind) {
        if (ind == nums.size()) {
            ans.push_back(nums);
            return;
        }
        for (int i = ind; i < nums.size(); i++) {
            swap(nums[ind], nums[i]);
            solve(nums, ind + 1);
            swap(nums[ind], nums[i]);
        }
    }
   
};
