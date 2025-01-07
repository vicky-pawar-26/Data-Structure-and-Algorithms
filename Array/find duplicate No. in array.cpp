// LEETCODE 287
// Approach No. 1
// Sort array then check duplicates
// TC: o(NlogN) SC: o(1)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
//         for(int i = 0; i < nums.size(); i++){
//             if(nums[i] == nums[i+1]){
//                 return nums[i];
//             }
//         }
//         return -1;
//     }
// };


//Approach No. 2
// Mark visited in array
// TC: o(n) SC: o(1)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//         for(int i = 0; i < nums.size(); i++){
//             int index = abs(nums[i]);
//             if(nums[index] < 0){
//                 return index;
//             }
//             nums[index] *= -1;
//         }
//         return -1;
//     }
// };

//Approach No. 3
// Swapping array element
// TC: o(n) SC: on(1)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        while(nums[0] != nums[nums[0]]){
//             swap(nums[0], nums[nums[0]]);
//        }
//        return nums[0];
//     }
// };

// Approach No. 4
// Using map
// TC: o(n) SC: o(n)

// class Solution {
// public:
//     int findDuplicate(vector<int>& nums) {
//        unordered_map<int, int> hash;
//        for(int i = 0; i < nums.size(); i++){
//         hash[nums[i]]++;
//        }
//        for(auto i: hash){
//         if(i.second > 1){
//             return i.first;
//         }
//        }
//        return -1;
//     }
// };