class Solution {
public:
    int minSteps(string s, string t) {
        vector<int>ans1(27,0);
        vector<int>ans2(27,0);
        for(int i = 0 ; i< s.length() ; i++){
            ans1[s[i]-'a']++;
        }
        for(int i = 0 ; i < t.length() ; i++){
            ans2[t[i]-'a']++;
        }

        int ans = 0 ;
        for(int i = 0 ; i < ans1.size() ; i++){
            ans+=abs(ans1[i]-ans2[i]);
        }
        return ans;
    }
};