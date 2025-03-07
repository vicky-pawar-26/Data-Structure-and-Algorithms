// LEETCODE  532
// K-diff Pairs in an Array
// Approach No. 1
// Using two for loop
// TC: o(n^2) SC: o(1)

// Approach No. 2
// Using two pointer approach
// TC: o(NlogN) SC: o(n)

// class Solution {
// public:
//     int findPairs(vector<int>& nums, int k) {
//         sort(nums.begin(), nums.end());
//         set<pair<int, int> > st;
//         int i = 0;
//         int j = 1;

//         while(j < nums.size()){
//             int diff = nums[j] - nums[i];
//             if(diff == k){
//                 st.insert({nums[i], nums[j]});
//                 i++, j++;
//             }
//             else if(diff > k){
//                 i++;
//             }
//             else{
//                 j++;
//             }
//             if(i == j) j++;
//         }

//         return st.size();
//     }
// };

// Approach No. 3
// Using binary search
// TC: o(NlogN) SC: o(n)

// class Solution {
// public:

//     int bs(vector<int>& arr, int s, int target){
//         int e = arr.size() - 1;
//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(arr[mid] == target){
//                 return mid;
//             }
//             else if(target > arr[mid]){
//                 s = mid  + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//         }

//         return -1;
//     }

//     int findPairs(vector<int>& nums, int k) {
//        sort(nums.begin(), nums.end());
//        set<pair<int, int> > st;

//        for(int i = 0; i < nums.size(); i++){
//             int target = nums[i] + k;
//             if(bs(nums, i+1, target) != -1){
//                 st.insert(make_pair(nums[i], target));
//             }
//        }
       
//        return st.size();
//     }
// };