// LEETCODE 29
// Divide two integers
// TC: o(logN) SC: o(1)


// class Solution {
// public:
//     #define ll long long int
//     int divide(int dividend, int divisor) {
//         ll s = 0;
//         ll e = abs(dividend);
//         ll ans = -1;

//         //Edge Case
//         if(dividend == INT_MIN && divisor == -1){
//             return INT_MAX;
//         }

//         while(s <= e){
//             ll mid = s + (e - s) / 2;
//             if(abs(mid * divisor) <= abs(dividend)){
//                 ans = mid;
//                 s = mid + 1;
//             }
//             else if(abs(mid * divisor) > abs(dividend)){
//                 e = mid - 1;
//             }
//             else{
//                 s = mid + 1;
//             }
//         }

//         if((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0)){
//             return ans;
//         }
//         else{
//             return -ans;
//         }
//     }
// };