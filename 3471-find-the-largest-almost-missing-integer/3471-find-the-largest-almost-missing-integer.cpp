class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans = -1;
        if(nums.size() == k){
            return *max_element(nums.begin(), nums.end());
        }
        if(k == 1){
            unordered_map<int,int> mp;
            for(int x : nums){
                mp[x]++;
            }
            for(int x : nums){
                if(mp[x] == 1){
                    ans = max(ans, x);
                }
            }

            return ans;
        }

        int low = nums[0], lowc = 0;
        int high = nums[nums.size()-1], highc = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] == low) lowc++;
            if(nums[i] == high) highc++;
        }
        if(lowc == 1 && highc == 1){
            return max(low, high);
        }
        if(lowc != 1 && highc == 1){
            return high;
        }
        if(highc != 1 && lowc == 1){
            return low;
        }
        return -1;
    }
};