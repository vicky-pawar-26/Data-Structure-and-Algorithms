// leetcode 26. Remove Duplicates from Sorted Array
// TC: o(n) SC: o(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i = 1;
        int j = 0;

        while(i < nums.size())
            if(nums[j] == nums[i]) i++;
            else nums[++j] = nums[i++];

        return j+1;
    }
};