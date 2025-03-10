// LEETCODE 1047 
// Remove all adjacent duplicates in a string
// TC: o(n) SC: o(1)

// class Solution {
// public:
//     string removeDuplicates(string s) {
//         string ans = "";
//         for(int i = 0; i < s.length(); i++){
//             if(ans.length() > 0 && ans[ans.size() - 1] == s[i]){
//                 ans.pop_back();
//             }
//             else{
//                 ans.push_back(s[i]);
//             }
//         }
//         return ans;
//     }
// };