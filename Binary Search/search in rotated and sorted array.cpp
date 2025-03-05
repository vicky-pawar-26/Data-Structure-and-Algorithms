// LEETCODE 33
// Search in rotated and sorted array
// Approach No. 1
// Find out pivot element using binary search and then find element using binary search
// TC: o(logN) SC: o(1)

// class Solution {
// public:

//     int binarySearch(vector<int>& nums, int s, int e, int target){
//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(nums[mid] == target){
//                 return mid;
//             }
//             else if(target > nums[mid]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//         }
//         return -1;
//     }

//     int getPivotIndex(vector<int>& nums){
//         int s = 0;
//         int e = nums.size() - 1;

//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(s == e) return s;
//             else if(mid + 1 <= e && nums[mid] > nums[mid + 1]){
//                 return mid;
//             }
//             else if(mid - 1 >= s && nums[mid - 1] > nums[mid]){
//                 return mid - 1;
//             }
//             else if(nums[s] > nums[mid]){
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }
//         return -1;
//     }

//     int search(vector<int>& nums, int target) {
//         int pivotIndex = getPivotIndex(nums);
//         int ans = -1;
//         if(target <= nums[pivotIndex] && target >= nums[0]){
//             ans = binarySearch(nums, 0, pivotIndex, target);
//         }
//         else{
//             ans = binarySearch(nums, pivotIndex + 1, nums.size() - 1, target);
//         }
//         return ans;
//     }
// };