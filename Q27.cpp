//27) Remove Element
/*Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
The order of the elements may be changed. 
Then return the number of elements in nums which are not equal to val.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }
};
