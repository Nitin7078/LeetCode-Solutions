class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {

        long long sum = 0;
        const int k = 1000000007;

        vector<long long> sumarry(s.size() + 1, 0);
        vector<long long> nonzero;
        vector<long long> power(s.size() + 1, 1);
        vector<int> cnt(s.size() + 1, 0);
        vector<int> ans;
        for (int i = 1; i <= s.size(); i++) {
            power[i] = (power[i - 1] * 10) % k;
        }

        long long num = 0;
        for (int i = 0; i < s.size(); i++) {
            sumarry[i + 1] = sumarry[i];
            cnt[i + 1] = cnt[i];

            if (s[i] != '0') {
                int d = s[i] - '0';
                sumarry[i + 1] += d;
                cnt[i + 1]++;
                num = (num * 10 + d) % k;
                nonzero.push_back(num);
            }
        }
        for (int i = 0; i < queries.size(); i++) {
            int l = queries[i][0];
            int r = queries[i][1];
            long long sum0 = sumarry[r + 1] - sumarry[l];
            int left = cnt[l];
            int right = cnt[r + 1] - 1;
            if (left > right) {
                ans.push_back(0);
                continue;
            }
            long long num0 = nonzero[right];
            if (left > 0) {
                int len = right - left + 1;
                num0 = (num0 - nonzero[left - 1] * power[len]) % k;
                if (num0 < 0)
                    num0 += k;
            }
            ans.push_back((1LL * sum0 * num0) % k);
        }
        return ans;
    }
};