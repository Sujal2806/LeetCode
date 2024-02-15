//41)First Missing Positive
/*Given an unsorted integer array nums, return the smallest missing positive integer.*/

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            m[nums[i]]++;
        }
        for (int i = 1;; i++) {
            if (m[i] == 0) {
                return i;
            }
        }
    }
};
