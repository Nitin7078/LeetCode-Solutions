class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int c = 0; 
        vector<string>ans;
        int j = 0 ; 
        for(int i = 0 ;i < s.length() ; i++){
            if(s[i] == '1'){
                c++;
            }
            if(c == k ){
                while(j < i && s[j] == '0') {
                    j++;
                }

                ans.push_back(s.substr(j, i - j + 1));
            }
            else if( c > k){
                while(c > k) {
                    if(s[j] == '1') {
                        c--;
                    }
                    j++;
                }

                while(j < i && s[j] == '0') {
                    j++;
                }
                    
                        ans.push_back(s.substr(j, i - j + 1));
                
                // j--;
                // c++;
            }
        }

        if(ans.size() == 0){
            return"";
        }
       sort(ans.begin(), ans.end(), [](string &a, string &b) {
    if(a.length() != b.length())
        return a.length() < b.length();

    return a < b;
});
return ans[0];
    }
};