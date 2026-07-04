class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i = 0 ; i < nums.size() ; i++){
            mp[nums[i]]++;
        }
        int ans = INT_MIN;
        for(auto it:mp){
            ans = max(ans,it.second);
        }
        int k = ans ;
        for(auto it : mp ){
            if(it.second == k){
                ans+=k;
            }
        }
        return ans - k ;
    }
};