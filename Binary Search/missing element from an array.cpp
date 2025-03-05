// leetcode 268
// Missing Number
//TC: o(logN) SC: o(1)

class Solution {
public:
    int getMissingNumber(vector<int> nums) {
        int s = 0;
        int e = nums.size() - 1;
        int ansIndex = nums.size();

        while (s <= e) {
            int mid = s + (e - s) / 2;

            int diff = nums[mid] - mid;
            if(diff == 0){
                s++;
            }
            else{
                ansIndex = mid;
                e--;
            }
        }

        return ansIndex;
    }

    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return getMissingNumber(nums);
    }
};