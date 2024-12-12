class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        long long ans=0;
        priority_queue<int>pq(gifts.begin(),gifts.end());
        while(k>0){
            int x=pq.top();
            pq.pop();
           // ans+=sqrt(x);
            pq.push(sqrt(x));
            k--;
        }
        while (!pq.empty()) {
                    ans += pq.top(); 
                   pq.pop();        
                                
        }
        return ans;

    }
};