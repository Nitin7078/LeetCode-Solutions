class Solution {
public:
bool check(char a, char b){
    if( ( a == 'a'|| a == 'e' || a == 'i' || a =='o' || a == 'u' ) && (b == 'a'|| b == 'e' || b == 'i' || b =='o' || b == 'u') ){
        return true;
    }
    return false ;
}
    vector<int> vowelStrings(vector<string>& words, vector<vector<int>>& queries) {
        vector<int>ans;
        for(int i = 0 ; i < words.size() ; i++){
            if( check( words[i][0] , words[i][words[i].size()-1] ) ){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        for(int i = 1 ; i < ans.size() ; i++){
            ans[i] = ans[i-1]+ans[i];
        }
        vector<int>ans1;
        for(int i = 0 ; i < queries.size() ; i++){
            int c = 0 ;
            int low = queries[i][0]-1;
            int high = queries[i][1];
            if(low >= 0){
                c = ans[high]-ans[low];
            }
            else{
                c = ans[high]-0;
            }
            ans1.push_back(c);
        }
        return ans1 ;
    }
};