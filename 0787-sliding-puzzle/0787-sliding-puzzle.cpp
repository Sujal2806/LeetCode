class Solution {
public:
 vector<vector<int>>dir={{1,3},{0,2,4},{1,5},{0,4},{3,5,1},{4,2}};
 void f(string s,unordered_map<string,int>&vis,int i,int m){
    if(vis.count(s) && m>=vis[s]) return;
    vis[s]=m;
    for(int j:dir[i]){
        swap(s[i],s[j]);
        f(s,vis,j,m+1);
        swap(s[i],s[j]);
    }

 }
    int slidingPuzzle(vector<vector<int>>& board) {
        string cp;
        unordered_map<string,int>vis;
        for(int i=0;i<2;i++){
            for(int j=0;j<3;j++){
                cp+=to_string(board[i][j]);
            }
        }
        
        f(cp,vis,cp.find('0'),0);
        return vis.count("123450")?vis["123450"]:-1;


    }
};