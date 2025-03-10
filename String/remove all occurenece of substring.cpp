// LEETCODE 1910
// Remove all occurenece of a substring

// class Solution {
// public:
//     void removeSubString(string& s, string& part){
//         int subIndex = s.find(part);
//         while(subIndex != string::npos){
//             s.erase(subIndex, part.length());
//             subIndex = s.find(part);
//         }
//     }

//     string removeOccurrences(string s, string part) {
//         removeSubString(s, part);
//         return s;
//     }
// };