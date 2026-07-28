class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        for (int i = 0; i < s.size(); i++) {
            int value = getValue(s[i]);
            if (i + 1 < s.size() && value < getValue(s[i + 1])) {
                ans -= value;  
            } else {
                ans += value;
            }
        }
        return ans;
    }

private:
    int getValue(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
};