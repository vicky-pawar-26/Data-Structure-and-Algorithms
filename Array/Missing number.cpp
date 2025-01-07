//leetcode 268. Missing Number

class Solution {
public:

 // Method 1
    // TC: o(nlogn) SC: o(1)
    int getMissingNum1(vector<int> nums){
        sort(nums.begin(), nums.end());
        for(int i = 0; i < nums.size(); i++){
            if(i != nums[i]) return i;
        }
        return nums.size();
    }
 // Method 2
    // TC: o(n) SC: o(1)
    int getMissingNum2(vector<int> nums){
        int ans = 0;
        for(int i = 0; i < nums.size(); i++){
            ans ^= nums[i];
        }
        for(int i = 0; i <= nums.size(); i++){
            ans ^= i;
        }
        return ans;
    }

    int missingNumber(vector<int>& nums) {
        return getMissingNum2(nums);
    }
};