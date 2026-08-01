class Solution {
public:
    vector<int>ans;
    // long long k ;
    int fun(int i , int j ){
        if(i == j){
            return ans[i] ;
        }
        return max ( ( ans[i] - fun(i+1 , j ) ), ( ans[j] -fun(i ,j-1 ) ) );
        
    }
    bool predictTheWinner(vector<int>& nums) {
        ans = nums;
         int k = fun(0,nums.size()-1);
        return k>=0;
    }
};