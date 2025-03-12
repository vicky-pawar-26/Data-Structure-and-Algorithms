// leetcode 767

class Solution {
public:
    string reorganizeString(string s) {
        // count most occur elements;
        int hash[26] = {0};

        for(int i = 0; i < s.size(); i++){
            hash[(s[i] - 'a')]++;
        }

        // find most occur elements;
        char most_freq_char;
        int max_freq = INT_MIN;

        for(int i = 0; i < 26; i++){
            if(hash[i] > max_freq){
                max_freq = hash[i];
                most_freq_char = i + 'a';
            }
        } 

        // place most freq char
        int index = 0;
        while(max_freq > 0 && index < s.size()){
            s[index] = most_freq_char;
            index += 2;
            max_freq--;
        }

        if(max_freq != 0){
            return "";
        }

        // if most freq char place then
        hash[most_freq_char - 'a'] = 0;

        // place rest of the char
        for(int i = 0; i < 26; i++){
            while(hash[i] > 0){
                index = index >= s.size() ? 1 : index;
                s[index] = i  + 'a';
                index += 2;
                hash[i]--;
            }
        }

        return s;
    }
};