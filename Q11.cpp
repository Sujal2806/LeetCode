//11) Container With Most Water
/*You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
Find two lines that together with the x-axis form a container, such that the container contains the most water.
Return the maximum amount of water a container can store.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1,ans=INT_MIN;
        while(i<j){
            int h=min(height[i],height[j]);
            int w=j-i;
            ans=max(ans,h*w);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return ans;
    }
};
