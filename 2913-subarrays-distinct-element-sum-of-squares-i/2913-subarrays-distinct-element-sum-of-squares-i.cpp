class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            unordered_map<int,int>mp;
            for (int k = i; k <= j; k++) {
                mp[nums[k]]++;
            }
            int j1 = 0; 
            for(auto it : mp){
                j1++;
            }
            ans+=j1*j1;
        }
        }
    
        return ans ;
    
    }
};