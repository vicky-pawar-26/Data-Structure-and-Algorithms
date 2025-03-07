// LEETCODE 658
// Find K Closest Elements
// Approach No. 1
// Using two pointer approach 
// TC: o(n) SC: o(n)

// class Solution {
// public:

//     vector<int> twoPointerApp(vector<int>& arr, int k, int x){
//         int l = 0;
//         int h = arr.size() - 1;

//         while(h - l >= k){
//             if(x - arr[l] > arr[h] - x){
//                 l++;
//             }
//             else{
//                 h--;
//             }
//         }

//         return vector<int>(arr.begin() + l, arr.begin() + h + 1);
//     }

//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         return twoPointerApp(arr, k, x);
//     }
// };

// TC: o(logN + k) SC: o(n)
// class Solution {
// public:

//     int getLowerBound(vector<int>& arr, int x){
//         int s = 0;
//         int e = arr.size() - 1;
//         int ans = e;
//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(arr[mid] >= x){
//                 ans = mid;
//                 e = mid - 1;
//             }
//             else if(x > arr[mid]){
//                 s = mid + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//         }
//         return ans;
//     }

//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         int h = getLowerBound(arr, x);
//         int l = h - 1;
//         while(k--){
//             if(l < 0){
//                 h++;
//             }
//             else if(h >= arr.size()){
//                 l--;
//             }
//             else if(x - arr[l] > arr[h] - x){
//                 h++;
//             }
//             else{
//                 l--;
//             }
//         }
//        return vector<int> (arr.begin()+l+1, arr.begin() + h);
//     }
// };