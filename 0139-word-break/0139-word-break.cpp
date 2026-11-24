// class Solution {
// public:

//     bool wordBreak(string s, vector<string>& wordDict) {
//          if (s.length() == 0)
//             return true;
         
//         for(int i = 1 ; i <= s.length() ; i++){
      
//            string a = s.substr(0, i);
            
//             for(int j = 0 ; j < wordDict.size() ; j++){
//                 if (a == wordDict[j]) {

//                     string remaining = s.substr(i);

//                     if (wordBreak(remaining, wordDict))
//                         return true;
//                 }
//             }
//         }
//         return  false;
//     }
// };

class Solution {
public:

    bool solve(int start, string &s, vector<string>& wordDict, vector<int>& dp) {

        if (start == s.length())
            return true;

        if (dp[start] != -1)
            return dp[start];

        for (int i = start + 1; i <= s.length(); i++) {

            string a = s.substr(start, i - start);

            for (int j = 0; j < wordDict.size(); j++) {

                if (a == wordDict[j]) {

                    if (solve(i, s, wordDict, dp))
                        return dp[start] = 1;
                }
            }
        }

        return dp[start] = 0;
    }

    bool wordBreak(string s, vector<string>& wordDict) {

        vector<int> dp(s.length(), -1);

        return solve(0, s, wordDict, dp);
    }
};
