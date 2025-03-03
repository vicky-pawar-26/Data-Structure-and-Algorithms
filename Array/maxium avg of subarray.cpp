// leet code 643. Maximum Average Subarray I

class Solution {
public:
    // TC: o(n ^ 2) SC: o(1)
    double bruteForce(vector<int>& nums, int& k){
        int i = 0; 
        int j = k - 1;
        int maxi = INT_MIN;

        while(j < nums.size()){
            int sum = 0;

            for(int m = i; m <= j; m++){
                sum += nums[m];
            }

            if(sum > maxi) maxi = sum;
            j++, i++;
        }

        double finalAvg = maxi / (double)k;
        return finalAvg;
    }

    // TC: o(n) SC: o(1) // sliding window
    double sol(vector<int>& nums, int& k){
        int i = 0; 
        int j = k - 1;
        int maxi = INT_MIN;
        int sum = 0;

        for(int m = i; m <= j; m++){
            sum += nums[m];
        }
        maxi = sum;

        j++;
        while(j < nums.size()){
            sum -= nums[i++];
            sum += nums[j++];
            maxi = max(sum, maxi);
        }

        double finalAvg = maxi / (double)k;
        return finalAvg;
    }

    double findMaxAverage(vector<int>& nums, int k) {
        return sol(nums, k);
    }
};
