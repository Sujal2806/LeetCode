class Solution {
public:
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        vector<bool>vis(nums.size(),false);
        long long ans=0;
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int j=it.second;
            if(!vis[j]){
                vis[j]=true;
                ans+=it.first;
                if(j-1>=0) vis[j-1]=true;
                if(j+1<nums.size()) vis[j+1]=true;
            }

        }
        return ans;
       /* vector<int>v(nums.begin(),nums.end());
        sort(v.begin(),v.end());
        vector<bool>vis(nums.size(),false);
        long long ans=0;
        for(int i:v){
            for(int j=0;j<nums.size();j++){
                if(nums[j]==i && !vis[j]){
                    ans+=i;
                    vis[j]=true;
                    if(j-1>=0) vis[j-1]=true;
                    if(j+1<nums.size()) vis[j+1]=true;
                }
            }

        }
        return ans;*/
    }
};