// leetcode 179

class Solution {
public:

    static bool cmp(string& a, string& b){
        string temp1 = a + b;
        string temp2 = b + a;
        return temp1 > temp2;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> sv;
        string s;

        for(auto i: nums){
            sv.push_back(to_string(i));
        }

        sort(sv.begin(), sv.end(), cmp);

        if(sv[0] == "0") return "0";

        for(auto i: sv){
            s += i;
        }

        return s;
    }
};