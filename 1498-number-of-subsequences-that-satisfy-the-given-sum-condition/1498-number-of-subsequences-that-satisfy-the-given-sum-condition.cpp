// class Solution {
// public:
//     int ans( vector<int>&nums, int target , int low ,int high , int idx,bool choosen){
//         if(idx == nums.size()){
//             if((low+high) <= target && choosen){
//                 return 1 ;
//             }
//             else{
//                 return 0 ;
//             }
//         }
//         int newlow;
//         int newhigh;
//         if (!choosen) {
//             newlow = nums[idx];
//             newhigh = nums[idx];
//         } else {
//             newlow = min(low, nums[idx]);
//             newhigh = max(high, nums[idx]);
//         }
        
//         int right = ans(nums,target,newlow,newhigh,idx+1,true);

//         int left = ans(nums,target,low,high,idx+1,choosen);
//         return left+right;
//     }
//     int numSubseq(vector<int>& nums, int target) {
    
//         return ans(nums,target,nums[0],nums[0],0,false);
//     }
// };

class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int n = nums.size();
        const int MOD = 1e9 + 7;

        vector<int> power(n, 1);

        // Precompute powers of 2
        for (int i = 1; i < n; i++) {
            power[i] = (2LL * power[i - 1]) % MOD;
        }

        int left = 0;
        int right = n - 1;
        long long ans = 0;

        while (left <= right) {
            if (nums[left] + nums[right] <= target) {
                ans = (ans + power[right - left]) % MOD;
                left++;
            } else {
                right--;
            }
        }

        return ans;
    }
};
