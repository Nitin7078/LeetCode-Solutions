class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int even = 0 , odd = 0 ;
        for(auto it : nums){
            if(it %2 == 0 ){
                even++;
            }
            else{
                odd++;
            }
        }
        int i = 0 ;
        for( i = 0 ; i < even ; i++){
            nums[i] = 0;
        }
        for(;i<nums.size() ; i++){
            nums[i]= 1 ;
        }
        return nums;
    }
};