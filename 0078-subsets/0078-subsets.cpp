class Solution {
public:
    vector<vector<int> > ans ; 
    void ans1(int n , vector<int>&arr , vector<int>&nums , int idx ){
        if(idx >= n){
            ans.push_back(arr);
            return ;
        }
        arr.push_back(nums[idx]);
        ans1(n,arr,nums , idx+1);
        arr.pop_back();
        ans1(n,arr,nums , idx+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>arr;
        ans1(nums.size() , arr , nums , 0);
        return ans ; 
    }
};