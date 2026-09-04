class Solution {
public:
// int check(int num ){
//     int c = 0; 
//     while(num  != 0 ){
//         if(num %2 == 1){
//             return c;
//         }
//         num = num/ 2 ;
//         c++;
//     }
//     return c;
// }
// int check1(int num,int ans){
//     int c = 0; 
//     while(num != 0 ){
//         if(c== ans){
//             return num % 2 ; 
//         }
//         num = num / 2 ;
//         c++;
//     }
//     return 0 ;
// }
    vector<int> singleNumber(vector<int>& nums) {
        int sum = 0; 
        for(auto it : nums){
            sum = sum^it ;
        }
        
unsigned int bit = (unsigned int)sum & -(unsigned int)sum;
        // int j = check1(nums[0] , ans);
        int sum1 = 0; 
        int sum2 = 0 ;
        for(int i = 0; i < nums.size() ; i++){
           if( nums[i] & bit ) {
                sum1 = sum1 ^ nums[i];
           }
           else{
            sum2 = sum2^nums[i];
           }

        }
        return {sum1 , sum2};
    }
};