// leetcode 151

class Solution {
public:
    string reverseWords(string s) {
        reverse(s.begin(), s.end());
        int start = 0;
        int e = 0;
        int n = s.length();

        for(int i = 0; i < n; i++){
            
            //remove leading spaces

            while(i < n && s[i] == ' '){
                i++;
            }
            if(i == n) break;

            //copy to left
            while(i < n && s[i] != ' '){
                s[e++] = s[i++];
            }

            // reverse the word
            reverse(s.begin() + start, s.begin() + e);
            s[e++] = ' ';
            start = e;
        }

        s.resize(e - 1);
        return s;
    }
};