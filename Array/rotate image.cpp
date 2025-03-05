//leetcode 48
// Apporoach No. 1
// Time Complexity: o(n^2)
// Space Complexity: o(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0; i < matrix.size(); i++){
            for(int j = i; j < matrix[i].size(); j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for(int i = 0; i < matrix.size(); i++){
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};