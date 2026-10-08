class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int st = 0 ; 
        int length = 0 ;
        unordered_set<char>ans; 
        for(int i = 0 ; i < s.length() ;i++){
            while( ans.find(s[i]) != ans.end()){
                ans.erase(s[st]);
                st++;
            }
            ans.insert(s[i]) ; 
            length = length > (i - st + 1) ? length :  (i - st + 1) ;
        }
        return length ;
    }
};