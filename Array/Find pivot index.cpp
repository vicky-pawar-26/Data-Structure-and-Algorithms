// leetcode 724. Find Pivot Index

class Solution {
public:

    // Bruteforce method
    // TC: o(n ^ 2) SC: o(1)
    int getPivotIndex1(vector<int>& nums){
        for(int i = 0; i < nums.size(); i++){
            int lsum = 0;
            int rsum = 0;

            // find out left sum 
            for(int j = 0; j < i; j++){
                lsum += nums[j];
            }

            // find out right sum
            for(int j = i + 1; j < nums.size(); j++){
                rsum += nums[j];
            }

            if(lsum == rsum) return i;
        }
        return -1;
    }
    
    // Prefix sum method
    // TC: o(n) SC: o(n)
    int getPivotIndex2(vector<int>& nums){
        vector<int> lsum(nums.size(), 0);
        vector<int> rsum(nums.size(), 0);

        for(int i = 1; i < nums.size(); i++){
            lsum[i] = lsum[i - 1] + nums[i - 1];
        }

        for(int i = nums.size()-2; i >= 0; i--){
            rsum[i] = rsum[i + 1] + nums[i + 1];
        }

        for(int i = 0; i < nums.size(); i++){
            if(lsum[i] == rsum[i]) return i;
        }
        return -1;
    }

    int pivotIndex(vector<int>& nums) {
        return getPivotIndex2(nums);
    }
};