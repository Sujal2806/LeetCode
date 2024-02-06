//33)Search in Rotated Sorted Array
/*Given the array nums after the possible rotation and an integer target, return the index of target if it is in nums, or -1 if it is not in nums.*/

using namespace std;
class Solution {
public:
    int search(vector<int>& nums, int target) {
       for(int i=0;i<nums.size();i++){
           if(nums[i]==target){
               return i;
           }
       } 
       return -1;
    }
};
