//14)Longest Common Prefix
/*Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string ans="";
        string x=strs[0],y=strs[n-1];
        for(int i=0;i<x.size();i++){
            if(x[i]!=y[i]){
                return ans;
            }
            ans+=x[i];
        }
        return ans;
        
    }
};
