class Solution {
public:

    string evaluate(string s, vector<vector<string>>& k) {
        int flag = 0;
        int start = 0;
        string ans ;
        unordered_map< string , string >mp;
        for(int i = 0; i < k.size() ; i++){
            mp[k[i][0]] = k[i][1];
        }
        for(int i = 0; i < s.length() ; i++){
            if(s[i] == '(' ){
                flag = 1 ;
                start = i;
            }
            else if(s[i] == ')'){
                flag = 0 ;
                string str;
                for(int j = start+1 ; j < i ; j++){
                    str.push_back(s[j]);
                }
                auto it = mp.find(str);

                if(it != mp.end()) {
                    ans += it->second;
                }
                else {
                    ans += '?';
                }
            }
            
            else{
                if(flag == 0)
                ans.push_back(s[i]);
            }
        }
        return ans ;
    }
};