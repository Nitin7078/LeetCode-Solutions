class Solution {
public:

bool fun(int idx , int target , vector<int>&ds , vector<int>&nums,vector<vector<int>>&dp){
    if(target < 0) return false;
    if(idx == nums.size()){
        if(target == 0 ){
            return true  ;
        }
        return false ;
    }

    //take
    bool take ;
     bool nottake;
    if(dp[idx][target] != -1 ){
        return take = dp[idx][target];
    }
    else{
        ds.push_back(nums[idx]);
        take = fun(idx+1,target-nums[idx],ds,nums,dp);
        
        ds.pop_back();
    
    //not take 
   
    
     nottake = fun(idx+1,target,ds,nums,dp);
    
    }
    return dp[idx][target] = nottake||take ;
}
    bool canPartition(vector<int>& nums) {
        // int dp[nums.size()][target];
        // for(int i= 0 ; i < nums.size() ; i++){
        //     for(int j = 0; j < target; j++){
        //         dp[i][j] = -1;
        //     }
        // }
        int sum = 0; 
        for(int i =0; i < nums.size() ; i++){
            sum+=nums[i];
        }
        if(sum %2 != 0 )return false ;
        vector<vector<int>> dp(nums.size(), vector<int>(sum/2 + 1, -1));

        vector<int>ds;

        return fun(0,sum/2,ds,nums,dp);
        
    }
};