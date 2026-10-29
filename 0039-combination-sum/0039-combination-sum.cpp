class Solution {
public:
void ans(vector<vector<int>>&ans1 ,vector<int>&ds, int idx , int target , vector<int>&nums){
    if(idx == nums.size()){
        if(target == 0){
            ans1.push_back(ds);
        }
        return ;
    }
    if(nums[idx] <= target){
        ds.push_back(nums[idx]);
        ans(ans1,ds,idx,target-nums[idx],nums);
        ds.pop_back();
    }
    
   ans(ans1,ds,idx+1,target,nums);
    return ;

}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>>ans1;
        vector<int>ds;
        ans(ans1,ds,0,target,candidates);
        return ans1;
    }
};