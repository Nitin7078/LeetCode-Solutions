class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0 ; 
        int i = 0 ; 
        for(i = 1 ; i < nums.size() ; i++){
            if(nums[i] >= nums[i-1]){
            }
            else{
                c = i ;
                break;
            }
        }
        if(i == nums.size()){
            return true ;
        }
        reverse(nums.begin(),nums.begin()+c);
        reverse(nums.begin()+c,nums.end());
        reverse(nums.begin(),nums.end());
        for(int i = 1 ; i < nums.size() ; i++){
            if(nums[i] >= nums[i-1]){}
            else{
                return false;
            }
        }
        return true ;
    }
};