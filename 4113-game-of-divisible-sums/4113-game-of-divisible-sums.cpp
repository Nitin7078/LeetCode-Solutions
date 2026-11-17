
class Solution {
public:
vector<long long>dp;
    long long fun(int idx , vector<int> &v){
        if(idx >= v.size() ){
            return 0;
        }
        if(dp[idx] != LLONG_MIN){
            return dp[idx];
        }
        long long ans = LLONG_MIN;
        long long sum = 0; 
        int c = 0;
        for(int k = idx ; k <v.size() && c<2 ; k++ , c++ ){
            sum+=v[k];
            long long next = fun(k+1,v);
            if(sum % 3 != 0) {
                ans = max(ans, sum + next);
            }
            else {
                ans = max(ans, sum - next);
            }
        }
        return dp[idx] = ans;
    }
    long long maxDifference(vector<int>& nums) {
        for(int i =0; i <nums.size() ; i++){
            dp.push_back(LLONG_MIN);
        }
        return fun(0,nums);
    }
};
// class Solution {
// public:
//     long long maxDifference(vector<int>& nums) {
//         int turn = 1;
//         int alis = 0, bob = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] % 3 == 0) {

//                 if (i == nums.size() - 1) {
//                     if (turn == 1) {
//                         alis = alis + nums[i];
//                         turn = 0;
//                     } else {
//                         bob = bob + nums[i];
//                         turn = 1;
//                     }
//                 } else {
//                     if (turn == 1) {
//                         alis = alis + nums[i] + nums[i + 1];

//                         if ((nums[i] + nums[i + 1]) % 3 == 0)
//                             turn = 0;

//                         i++;
//                     } else {
//                         bob = bob + nums[i] + nums[i + 1];

//                         if ((nums[i] + nums[i + 1]) % 3 == 0)
//                             turn = 1;
//                         i++;
//                     }
//                 }
//             } else {
//                 if (turn == 1) {
//                     alis = alis + nums[i];
//                 } else {
//                     bob = bob + nums[i];
//                 }
//             }
//         }
//         return alis-bob;
//     }
// };
