/*
Problem: Rotate an array by k steps
Source: Striver A2z Dsa
*/

class Solution {
public:
    void reversePart(int i,int j,vector<int>& nums){
        while(i<=j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }

    void rotateArray(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        reversePart(0,k-1,nums);
        reversePart(k,n-1,nums);
        reversePart(0,n-1,nums);


    }
};