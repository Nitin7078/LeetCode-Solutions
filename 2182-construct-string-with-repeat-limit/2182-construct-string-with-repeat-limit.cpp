class Solution {
public:
    string repeatLimitedString(string s, int rl) {
        vector<int> answer(26, 0);
        string ans;
        for (char ch : s)
            answer[ch - 'a']++;
        for (int i = 25; i >= 0; i--) {

            while (answer[i] > 0) {
                int cnt = min(answer[i], rl);
                while (cnt--) {
                    ans.push_back(i + 'a');
                    answer[i]--;
                }
                if (answer[i] == 0)
                    break;

                int k = i - 1;
                while (k >= 0 && answer[k] == 0)
                    k--;
                if (k == -1)
                    return ans;

                ans.push_back(k + 'a');
                answer[k]--;
            }
        }

        return ans;
    }
};