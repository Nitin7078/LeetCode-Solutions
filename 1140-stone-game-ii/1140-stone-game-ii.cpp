class Solution {
public:
int n  ; 
vector<vector<int>> memo;
int dp (int i , int m , vector<int>&piles){
    if (i >= piles.size())
    return 0;
    if (memo[i][m] != -1)
        return memo[i][m];
    int sum = 0 ; 
    for(int j = i ; j < piles.size() ; j++){
        sum += piles[j];
    }
    int ans = INT_MIN;
    for(int x = 1 ; x <= m*2 ; x++){
        ans = max(sum - dp( i+x , max( m , x ) , piles) , ans ) ;
    }
    return memo[i][m] = ans;
}
    int stoneGameII(vector<int>& piles) {
        n = piles.size();
        memo.assign(n + 1, vector<int>(n + 1, -1));
        // piles = pile ;
        int ans = dp(0,1 , piles);
        // int sum = 0 ;
        // for(int i = 0; i < piles.size() ; i++){
        //     sum = sum + piles[i];
        // }
        return  ans ;
    }
};