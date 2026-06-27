class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int ar) {
        vector<int>ans;
        for(int i = 0 ; i < rocks.size() ; i++){
            ans.push_back( capacity[i] - rocks[i] );
        }
        sort(ans.begin(),ans.end());
        int c = 0;
        for(int i = 0; i < ans.size() ;i++){
            if(ar < ans[i]){
                break;
            }
            ar = ar - ans[i];
            if(ar>=0){
                c++;
            }
        }
        return c ; 
    }
};