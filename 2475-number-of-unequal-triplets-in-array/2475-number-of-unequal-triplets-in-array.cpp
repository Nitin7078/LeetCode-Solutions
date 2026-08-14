class Solution {
public:
    int unequalTriplets(vector<int>& nums) {
        int c = 0;
        for(int i = 0 ; i<nums.size() ; i++){
            for(int j = 0 ; j < nums.size() ; j++){
                for(int k = 0; k < nums.size() ; k++){
                    if(nums[i] != nums[j] && nums[j] !=nums[k] && nums[i] != nums[k]){
                        c++;
                    }
                }
            }
        }
        return c / 6 ;
    }
};