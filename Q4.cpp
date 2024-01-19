//4) Median of Two Sorted Arrays

/*Given two sorted arrays nums1 and nums2 of size m and n respectively, return the median of the two sorted arrays.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    int x=nums1.size()+nums2.size();
    float z;
    vector<int> a;
    for(int i=0;i<nums1.size();i++){
        a.push_back(nums1[i]);
     }
     for(int i=0;i<nums2.size();i++){
        a.push_back(nums2[i]);
     }
     sort(a.begin(), a.end());
     if(x%2!=0){
         return a[x/2];
     }
     else
     z=float(a[x/2]+a[(x-1)/2])/2;
     return z;
    }
};
