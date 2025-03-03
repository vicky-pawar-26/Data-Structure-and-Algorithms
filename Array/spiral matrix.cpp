// LEETCODE 54
// Spiral matrix print
// Approach No. 1 using loop
// TC: o(n*m) SC: o(n)

// class Solution {
// public:
//     vector<int> spiralOrder(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int m = matrix[0].size();

//         int t = n * m;

//         int startRow = 0;
//         int endRow = n - 1;
//         int startCol = 0;
//         int endCol = m - 1;

//         int count = 0;

//         vector<int> ans;

//         while(count < t){
            
//             //printing start col to endcol

//             for(int i = startCol; i <= endCol && count < t; i++){
//                 ans.push_back(matrix[startRow][i]);
//                 count++;
//             }

//             startRow++;

//             //print startrow to endrow

//             for(int i = startRow; i <= endRow && count < t; i++){
//                 ans.push_back(matrix[i][endCol]);
//                 count++;
//             }

//             endCol--;

//             //printing end col to start col

//             for(int i = endCol; i >= startCol && count < t; i--){
//                 ans.push_back(matrix[endRow][i]);
//                 count++;
//             }

//             endRow--;

//             //printing end row to start row

//             for(int i = endRow; i >= startRow && count < t; i--){
//                 ans.push_back(matrix[i][startCol]);
//                 count++;
//             }

//             startCol++;
//         }

//         return ans;
//     }
// };