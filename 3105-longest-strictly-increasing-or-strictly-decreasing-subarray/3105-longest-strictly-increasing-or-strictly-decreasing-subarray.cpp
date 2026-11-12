class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int ans = 1;
        int c = 0; 
        int flag = 0;
        for(int i = 0; i <nums.size()-1 ; i++){
            if(nums[i] < nums[i+1] && flag == 0 ){
                flag = 1 ;
                c++;
            }
             if(nums[i] < nums[i+1] && flag == 1){
                c++;
            }
            else{
                flag = 0;
                ans = max(ans,c);
                c = 0;
            }
        }

        ans = max(ans,c);

        flag = 0 ;
        c = 0;

        for(int i = 0; i <nums.size()-1 ; i++){
            if(nums[i] > nums[i+1] && flag == 0 ){
                flag = 1 ;
                c++;
            }
             
            if(nums[i] > nums[i+1] && flag == 1){
                c++;
            }
            else{
                flag = 0;
                ans = max(ans,c);
                c = 0; 
            }
        }
        ans = max(ans,c);
        return ans ; 
          }
};