
// class Solution {
// public:
//     int dp[100000];

//     int solve(int idx, vector<int>& cost, int n) {

//         if (idx == n) {
//             return 0;
//         }

//         if (dp[idx] != -1) {
//             return dp[idx];
//         }

//         int a = INT_MAX;
//         int b = INT_MAX;
//         int k = INT_MAX;

//         if (idx + 1 <= n) {
//             a = cost[idx] + 1 + solve(idx + 1, cost, n);
//         }

//         if (idx + 2 <= n) {
//             b = cost[idx + 1] + 4 + solve(idx + 2, cost, n);
//         }

//         if (idx + 3 <= n) {
//             k = cost[idx + 2] + 9 + solve(idx + 3, cost, n);
//         }

//         return dp[idx] = min({a, b, k});
//     }

//     int climbStairs(int n, vector<int>& costs) {
//         memset(dp, -1, sizeof(dp));
//         return solve(0, costs, n);
//     }
// };

class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {

        vector<int> dp(n + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 1; i <= n; i++) {

            dp[i] = min(dp[i], dp[i-1] + costs[i-1] + 1);

            if (i >= 2) {
                dp[i] = min(dp[i], dp[i-2] + costs[i-1] + 4);
            }

            if (i >= 3) {
                dp[i] = min(dp[i], dp[i-3] + costs[i-1] + 9);
            }
        }

        return dp[n];
    }
};
