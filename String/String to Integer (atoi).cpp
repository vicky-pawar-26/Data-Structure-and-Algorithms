// leetcode 8

class Solution {
public:
    int myAtoi(string s) {
        // Ingnore leading white spaces

        int index = 0, num = 0, sign = 1;
        while (s[index] == ' ') {
            index++;
        }

        // Determin sign
        if (index < s.size() && (s[index] == '-' || s[index] == '+')) {
            sign = s[index] == '+' ? 1 : -1;
            index++;
        }

        // determine digit
        while (index < s.size() && isdigit(s[index])) {
            if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[index] > '7')) {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[index] - '0');
            index++;
        }

        return num * sign;
    }
};