class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int ans = INT_MAX;
        for(int i = 0; i < nums.size() ; i++ ){
            int m = INT_MAX;
            for(int j = i ; j<nums.size() ; j++ ){
                m = min(m,nums[j]);
            }
            int n = INT_MIN;
            for(int j = i ; j >= 0 ; j--){
                n = max(n,nums[j]);
            }
            if(n - m <= k){
                ans = min(ans,i);
            }
        }
        if(ans == INT_MAX){
            return -1;
        }
        return ans ;
    }
};