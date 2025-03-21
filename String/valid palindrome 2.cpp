// LEETCODE 680
// Valid palindrome 2
// TC: o(n) SC: (1)

// class Solution {
// public:

//     bool checkPalindrome(string s, int i, int j){
//         while(i <= j){
//             if(s[i] != s[j]) return false;
//             i++, j--;
//         }
//         return true;
//     }

//     bool validPalindrome(string s) {
//         int i = 0;
//         int j = s.size() - 1;

//         while(i <= j){
//             if(s[i] != s[j]){
//                 return (checkPalindrome(s, i + 1, j) || checkPalindrome(s, i, j - 1));
//             }
//             else{
//                 i++, j--;
//             }
//         }

//         return true;
//     }
// };