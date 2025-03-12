// leetcode 49

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string> > hash;

        for(auto i: strs){
            string s = i;
            sort(s.begin(), s.end());
            hash[s].push_back(i);
        }

        vector<vector<string> > ans;

        // for(auto i: hash){
        //     ans.push_back(i.second);
        // }

        for(auto it = hash.begin(); it != hash.end(); it++){
            ans.push_back(it->second);
        }

        return ans;
    }
};