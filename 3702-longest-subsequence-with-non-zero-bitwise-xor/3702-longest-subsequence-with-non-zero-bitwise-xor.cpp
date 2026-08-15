class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int ans = nums[0];
        int zero ;
        if(nums[0] == 0)
         zero = 1 ;
        else{
            zero = 0 ;
        }
        for(int i = 1; i < nums.size() ; i++){
            if( nums[i] == 0){
                zero++;
            }
            ans = ans^nums[i];
        }
        if( zero == nums.size()){
            return 0 ;
        }
        if(ans != 0){
            return nums.size();
        }else{
            return nums.size()-1;
        }
        return 0 ;
    }
};