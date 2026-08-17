class Solution {
public:
    int minimumPushes(string word) {
        vector<int>ans(26,0);
        for(int i = 0 ; i < word.length() ; i++){
            ans[word[i] - 'a']++;
        }
        sort(ans.begin() , ans.end());
        int k = 0 ;
        int c =1 ;
        int sum = 0; 
        for(int i = ans.size()-1 ; i >=0 ; i--){
            if(ans[i] == 0) break;

            if(k == 8) {
                k = 0;
                c++;
            }
            sum += ans[i] * c;
            k++;
        }
        return sum ;
    }
};