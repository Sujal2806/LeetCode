class Solution {
public:
    long long continuousSubarrays(vector<int>& nums) {
        long long ans=0;
        int l=0,r=0;
        map<int,int>m;
        while(r<nums.size()){
            m[nums[r]]++;
            while(m.rbegin()->first - m.begin()->first>2){
                m[nums[l]]--;
                if(m[nums[l]]==0) m.erase(nums[l]);
                l++;

            }
            ans+=r-l+1;
            r++;
        }
        /*int ma=nums[l],mi=nums[l];
        while(r<nums.size()){
            ma=max(ma,nums[r]);
            mi=min(mi,nums[r]);
            
            while (ma - mi > 2) {
                l++;  
                ma = *max_element(nums.begin() + l, nums.begin() + r + 1);
                mi = *min_element(nums.begin() + l, nums.begin() + r + 1);
            }
            ans += (r - l + 1);
            r++;
        }*/
        

        return ans;

    }
};