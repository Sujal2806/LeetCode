class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        set<int>se(banned.begin(),banned.end());
        int s=0,c=0;
        for(int i=1;i<=n;i++){
            if(se.find(i)==se.end())
             if(i+s<=maxSum){
                c++;
                s+=i;
             }
             else{
                break;
             }
            


        }
        return c;
    }
};