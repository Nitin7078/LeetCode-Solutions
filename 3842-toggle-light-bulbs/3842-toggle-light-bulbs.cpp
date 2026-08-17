class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<int>ans(101 ,0);
        for(int i = 0; i < bulbs.size() ; i++){
            ans[bulbs[i]]++;
        }
        vector<int>ans2;
        for(int i = 0; i < 101 ; i++){
            if(ans[i]%2!=0){
                ans2.push_back(i);
            }
        }
        return ans2;
    }
};