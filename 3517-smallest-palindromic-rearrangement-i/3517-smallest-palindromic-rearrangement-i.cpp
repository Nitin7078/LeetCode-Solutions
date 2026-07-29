class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int>v(26,0) ;
        string left , mid ;
        for(auto it: s){
            v[it-'a']++;
        }
        for(int i = 0 ; i < 26 ; i++){
            for(int j=0;j<v[i]/2;j++){
                left.push_back(i+'a');
            }
            if(v[i]%2){
                mid.push_back(i+'a');
            }
        }
        string right = left ;
        reverse(right.begin(),right.end());
        return left + mid + right ;
    }
};