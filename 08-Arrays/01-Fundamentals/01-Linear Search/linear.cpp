/*
 Problem: Linear Search 
 Source: Striver A2Z Dsa
*/

class Solution {
public:
    int linearSearch(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }


        } return -1;
    } 
};