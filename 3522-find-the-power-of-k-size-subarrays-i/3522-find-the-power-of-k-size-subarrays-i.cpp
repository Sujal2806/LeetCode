class Solution {
public:
int f(int l,int r,vector<int>nums){
    for(int i=l+1;i<=r;i++){
        if(nums[i]>nums[i-1] && nums[i]-nums[i-1]==1) continue;
        else return -1;
    }
    return nums[r];
}
    vector<int> resultsArray(vector<int>& nums, int k) {
        int l=0;
        int r=l+k-1;
        vector<int>ans;
        while(r<nums.size()){
            ans.push_back(f(l,r,nums));
            l++;
            r++;
        }
        return ans;
    }
};