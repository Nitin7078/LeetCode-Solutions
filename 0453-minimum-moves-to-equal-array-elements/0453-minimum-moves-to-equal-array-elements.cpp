// class Solution {
// public:
//     int minMoves(vector<int>& nums) {
//         int Min = INT_MAX;
//         int Max = INT_MIN;
//         int ans = 0; 
//          while(Min != Max){
            
//             int idx ;
//             for(int i = 0; i < nums.size() ; i++){
//                 if(Max < nums[i]){
//                     Max = nums[i];
//                     idx = i ;
//                 }
//             }
//             Min = *min_element(nums.begin(), nums.end());
//             int dif = Max - Min ;
//             for(int i =0; i < nums.size() ; i++){
//                 if ( i != idx){
//                     nums[i] = nums[i]+dif;
//                 }
//             }
//             ans = ans + dif;
//          }
//          return ans ;
//     }
// };
class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini = *min_element(nums.begin(), nums.end());

        int ans = 0;

        for(int i = 0; i < nums.size(); i++){
            ans += nums[i] - mini;
        }

        return ans;
    }
};