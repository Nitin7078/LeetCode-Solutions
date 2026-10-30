// class Solution {
// public:
// int fun(int m , int n , vector<vector<int>>&nums , int idx , int ds , vector<vector<int>>&dp){
//     if(idx == nums.size()){
//         if(m == 0 && n == 0 ){
//             return ds;
//         }
//     }
//     int w = m + n ;
//     int take , not_take;
//     if(dp[idx][w] != -1){
//         return dp[idx][w];
//     }
//     else{
//         //take 
//         ds++;
//         take = fun(m - nums[idx][0] , n-nums[idx][1] , nums , idx+1,ds,dp) ;
//         ds--;
//         not_take = fun(m,n,nums,idx+1 , ds,dp);

//     }
//     return dp[idx][w] = ds;
// }
//     int findMaxForm(vector<string>& strs, int m, int n) {
//         vector<vector<int>>nums;
//         for(int i = 0 ; i < strs.size() ; i++){
//             int zero=0,one = 0;
//             for(int j = 0; j < strs[i].length() ; j++){
//                 if(strs[i][j] == '0'){
//                     zero++;
//                 }
//                 else{
//                     one++;
//                 }
//             }
//             nums.push_back({zero,one});
//         }
//         vector<vector<int>> dp(nums.size(), vector<int>(m+n + 1, -1));
//         return fun(m , n , nums, 0 , 0 , dp);

//     }
// };

class Solution {
public:
    int fun(int m, int n, vector<vector<int>>& nums, int idx,
            vector<vector<vector<int>>>& dp) {
        if (idx == nums.size()) {
            return 0;
        }

        if (dp[idx][m][n] != -1) {
            return dp[idx][m][n];
        }

        int not_take = fun(m, n, nums, idx + 1, dp);

        int take = 0;

        if (nums[idx][0] <= m && nums[idx][1] <= n) {
            take = 1 + fun(m - nums[idx][0],
                           n - nums[idx][1],
                           nums, idx + 1, dp);
        }

        return dp[idx][m][n] = max(take, not_take);
    }

    int findMaxForm(vector<string>& strs, int m, int n) {

        vector<vector<int>> nums;

        for (int i = 0; i < strs.size(); i++) {
            int zero = 0, one = 0;

            for (int j = 0; j < strs[i].length(); j++) {
                if (strs[i][j] == '0') {
                    zero++;
                } else {
                    one++;
                }
            }

            nums.push_back({zero, one});
        }

        vector<vector<vector<int>>> dp(
            nums.size(),
            vector<vector<int>>(m + 1, vector<int>(n + 1, -1))
        );

        return fun(m, n, nums, 0, dp);
    }
};
