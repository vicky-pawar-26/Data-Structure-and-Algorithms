// LEETCODE 647
// Palindromic substring
// Approach No. 1
// Find out all substring and then check palindrome or not
// TC: o(n^3) SC: o(1)

// Approach No. 2
// Expanding approach with pointer 
// TC: o(n^2) SC: o(1)

// class Solution {
// public:

//     int exp(string& s, int i, int j){
//         int count = 0;
//         while(i >= 0 && j < s.size() && s[i] == s[j]){
//             count++;
//             i--;
//             j++;
//         }
//         return count;
//     }

//     int countSubstrings(string s) {
//         int count = 0;
//         for(int i = 0; i < s.size(); i++){
//             int oddAns = exp(s, i, i);
//             count += oddAns;
//             int evenAns = exp(s, i, i+1);
//             count+=evenAns;
//         }
//         return count;
//     }
// };