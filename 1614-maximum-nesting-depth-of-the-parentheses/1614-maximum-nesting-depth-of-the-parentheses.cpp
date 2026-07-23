class Solution {
public:
    int maxDepth(string s) {
        int ans = 0 ; 
        int ans1 = 0 ;
        int c = 0 ; 
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == '(' ){
                ans1++;
                ans = max(ans,ans1);
            }
            else if(s[i] == ')'){
                ans1 --;
            }
        }
        
        return ans ;
    }
};