class Solution {
public:
bool contains(vector<char>&ans){
    int c = 0 , k = 0 , z = 0 ; 
    for(int i = 0 ; i < ans.size() ;i++){
        if(ans[i]=='a'){
            c++;
        }
        if(ans[i] =='b'){
            k++;
        }
        if(ans[i] == 'c'){
            z++;
        }
    }
    if(c&&k&&z)
    return true ;
    return false;
}
    int numberOfSubstrings(string s) {
        // vector<char>ans;
        int cnt[3] = {0};
        int answer = 0 ;
        int right = 0 , left = 0 ; 
        for(int i = 0 ; right < s.length() ; right++){
            // ans.push_back(s[right]);
            cnt[s[right]-'a']++;
            while(cnt[0] && cnt[1] && cnt[2]){
                answer+=s.length()-right;
                // ans.erase(ans.begin());
                cnt[s[left]-'a']--;
                left++;
            }
        }
        return answer;
    }
};