// leetcode 6

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;

        vector<string> v(numRows);
        int i = 0, row = 0;
        bool direction = 1;

        while(true){
            if(direction){
                while(row < numRows && i < s.size()){
                    v[row++].push_back(s[i++]);
                }
                row = numRows - 2;
            }
            else{
                while(row >= 0 && i < s.size()){
                    v[row--].push_back(s[i++]);
                }
                row = 1;
            }

            if(i >= s.size()) break;
            direction = !direction;
        }   

        for(int i = 0; i < v.size(); i++){
            cout<<v[i]<<endl;
        }

        string ans = "";
        for(int i = 0; i < v.size(); i++){
            ans += v[i];
        }
        return ans;
    }
};