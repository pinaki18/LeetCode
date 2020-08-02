/*  https://leetcode.com/problems/single-number/  */ 

class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        int res = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            res = res ^ nums[i];
        }
       return res;

    }
};
