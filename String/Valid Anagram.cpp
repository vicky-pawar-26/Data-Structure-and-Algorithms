// leetcode 242

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[256] = {0};    
        for(auto i: s) freq[i]++;
        for(auto i: t) freq[i]--;
        for(int i = 0; i < 256; i++){
            if(freq[i] != 0) return false;
        }
        return true;
    }
};