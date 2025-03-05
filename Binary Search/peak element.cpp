// LEETCODE 852 Peak element in a moutain array
// Approach No. 1
// Using Binary Search
// TC: o(logN) SC: o(1)

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//        int s = 0;
//        int e = arr.size() - 1;
//        while(s < e){
//         int mid = s + (e - s) / 2;
//         if(arr[mid] < arr[mid + 1]){
//             s = mid + 1;
//         }
//         else{
//             e = mid;
//         }
//        }
//        return s;
//     }
// };

// Approach No. 2
// linear traversing on the array
// TC: o(n) SC: o(1)

// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//        for(int i = 0; i < arr.size(); i++){
//         if(arr[i] > arr[i+1]){
//             return i;
//         }
//        }
//        return -1;
//     }
// };