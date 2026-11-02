// class Solution {
// public:
//     long long minimumMaxValue(int n, int index, int value) {
//         if (n == 1) return value;
//         if (value == 1) return -1;

//         vector<long long> ans(n, 0);
//         ans[index] = value;

//         // Left side
//         int i = index;

//         while (i > 0) {
//             bool flag = false;

//             for (long long j = ans[i] - 1; j >= 1; j--) {
//                 if (gcd(j, ans[i]) > 1) {
//                     ans[i - 1] = j;
//                     i--;
//                     flag = true;
//                     break;
//                 }
//             }

//             if (!flag) return -1;
//         }

//         // Right side
//         i = index;

//         while (i < n - 1) {
//             bool flag = false;

//             for (long long j = ans[i] + 1; j <= 2 * ans[i]; j++) {
//                 if (gcd(ans[i], j) > 1) {
//                     ans[i + 1] = j;
//                     i++;
//                     flag = true;
//                     break;
//                 }
//             }

//             if (!flag) return -1;
//         }

//         return ans[n - 1];
//     }
// };
// gives TLE 
class Solution {
public:
    long long minimumMaxValue(int n, int index, int value) {

        if (value == 1) return -1;

        long long p = value;

        // Find smallest prime factor
        for (long long i = 2; i * i <= value; i++) {
            if (value % i == 0) {
                p = i;
                break;
            }
        }

        // Check left side
        if (value - p < 2LL * index) {
            return -1;
        }

        // Number of elements on right
        long long t = n - index - 1;

        if (t == 0) return value;

        return value + p + 2LL * (t - 1);
    }
};