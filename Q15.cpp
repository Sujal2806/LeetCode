//15) 3Sum
/*Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>>ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int lo=i+1,hi=n-1;
            while(lo<hi){
                int c=nums[i]+nums[lo]+nums[hi];
                if(c==0){
                    ans.push_back({nums[i],nums[lo],nums[hi]});
                    lo++;
                    hi--;
                }
                else if(c<0){
                    lo++;
                }
                else{
                    hi--;
                }
            }
        }
        sort(ans.begin(),ans.end());
        ans.erase(unique(ans.begin(),ans.end()),ans.end());
        return ans;
        
    }
};
