class Solution {
public:
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
       // priority_queue<pair<double,pair<int,int>>,vector<pair<double,pair<int,int>>>,greater<pair<double,pair<int,int>>>>pq;
        priority_queue<pair<double,pair<int,int>>>pq;
        for(auto it:classes){
            int p=it[0];
            int t=it[1];
            double gain=(double)(p+1)/(t+1)-(double)p/t;
            pq.push({gain,{p,t}});
        }
        while(extraStudents--){
            auto it=pq.top();
            pq.pop();
    
            int t=it.second.second;
            int p=it.second.first;
            t++;
            p++;
            
            
            double ngain=(double)(p+1)/(t+1)-(double)p/t;
            pq.push({ngain,{p,t}});

        }
        double ans=0;
       while(!pq.empty()){
             auto it=pq.top();
             pq.pop();
             int t=it.second.second;
            int p=it.second.first;
             ans+=(double)p/t;
       }
        return ans/classes.size();

    }
};