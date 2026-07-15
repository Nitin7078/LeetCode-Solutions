class Solution {
public:
    int hIndex(vector<int>& c) {
        sort(c.begin(),c.end());
        int ans = 0 ;
        for(int i = 0 ; i < c.size() ; i++){
            if(c[i] >= c.size()-i){
                ans = c.size()-i;
                break;
            }
        }
        return ans;
    }
};