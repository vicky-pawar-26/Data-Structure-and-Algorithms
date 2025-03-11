// leetcode 1781

class Solution {
public:
    int beautySum(string s) {
        int beautySum = 0;
        unordered_map<char, int> hash;

        for(int i = 0; i < s.length(); i++){
            hash.clear();
            for(int j = i; j < s.length(); j++){
                char &ch = s[j];
                hash[ch]++;

                int mini = INT_MAX;
                int maxi = INT_MIN;

                for(auto each: hash){
                    mini = min(each.second, mini);
                    maxi = max(each.second, maxi);
                }

                int beauty = maxi - mini;
                beautySum += beauty;
            }
        }
        return beautySum;
    }
};