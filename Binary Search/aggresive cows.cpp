// GFG Aggressive Cows
// TC: O(n*log(maximum no of stalls)) SC: o(1)

// class Solution {
// public:

//     bool isPossibleSol(vector<int> &stalls, int n, int k, int sol){
//         int cowCount = 1;
//         int lastPos = stalls[0]; // Putting first cow at 0th place of stalls
        
//         for(int i = 1; i < n; i++){
//             if(stalls[i] - lastPos >= sol){ // Check minimum distance between current place and last position
//                 cowCount++;
//                 lastPos = stalls[i];
//             }
//             if(cowCount == k) return true;
//         }
//         return false;
//     }

//     int solve(int n, int k, vector<int> &stalls) {
    
//         // Write your code here   
//         sort(stalls.begin(), stalls.end()); // Sortin stalls becoz of to check minimum distance
         
//         int s = 0;
//         int e = stalls[stalls.size() - 1] - stalls[0];
//         int ans = -1;
//         while(s <= e){
//             int mid = s + (e - s) / 2;
//             if(isPossibleSol(stalls, n, k, mid)){
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else{
//                 e = mid - 1;
//             }
//         }
//         return ans;
//     }
// };