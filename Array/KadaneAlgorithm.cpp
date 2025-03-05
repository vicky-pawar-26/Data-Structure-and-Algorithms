// leetcode 53 maximum subarray
class Solution
{
public:
    // Approch no. 1 - find out all subarray and sum 
    // TC: o(n^2)
    // SC: o(1)
    int naive(vector<int> &nums)
    {
        int ans = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            int sum = 0;
            for (int j = i; j < nums.size(); j++)
            {
                sum = sum + nums[j]; 
                                    
                ans = max(ans, sum);
            }
        }
        return ans;
    }

    // Approcch no. 2 - usnig kedane algo
    // TC: o(n^2)
    // SC: o(1)
    int kadaneAlgo(vector<int> &nums)
    {
        int ans = INT_MIN, sum = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[i];
            sum += num;
            ans = max(ans, sum);
            if (sum < 0)
                sum = 0;
        }
        return ans;
    }

    int maxSubArray(vector<int> &nums)
    {
        // return naive(nums);

        return kadaneAlgo(nums);
    }
};
