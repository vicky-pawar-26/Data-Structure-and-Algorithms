// leetcode 2325

class Solution {
public:
    string decodeMessage(string key, string message) {
        unordered_map<char, char> mapping;
        char space = ' ';
        mapping[space] = space;
        string ans;
        char start = 'a';
        int index = 0;

        while (start <= 'z' && index < key.length()) {
            char currChar = key[index];
            if (mapping.find(currChar) != mapping.end()) {
                index++;
            } else {
                mapping[currChar] = start;
                start++;
                index++;
            }
        }

        for(int i = 0; i < message.length(); i++){
            char ch = message[i];
            ans.push_back(mapping[ch]);
            
        }
        return ans;
    }
};