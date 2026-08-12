class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int ans = INT_MIN;
        unordered_map<int,int>mp; 
        int j = 0 ; 
        for(auto it: nums){
            mp[it] = 0;
        }
        for(int i = 0; i < nums.size() ; i++){
            if(mp[nums[i]] < k){
                mp[nums[i]]++;
            }
            else{
                mp[nums[j]]--;
                j++;
                i--;
            }
            ans = max(ans,( i - j + 1 ) );
        }
        return ans;
    }
};