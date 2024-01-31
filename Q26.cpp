//25) Remove Duplicates from Sorted Array
/*Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. 
Then return the number of unique elements in nums.*/

#include<bits/stdc+.h>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k=1;
        for(int i=1;i<nums.size();i++){
            if (nums[i-1]!=nums[i])
            {
                nums[k]=nums[i];
                k++;
            }
        }
        
        return k;
    }
};
