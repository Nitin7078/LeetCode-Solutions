class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
        int n = word1.size(), m = word2.size();

        vector<int> suf(m, -1);
        int j = m - 1;
        for (int i = n - 1; i >= 0 && j >= 0; --i) {
            if (word1[i] == word2[j]) {
                suf[j] = i;
                --j;
            }
        }
        vector<int> ans;
        int start = 0;
        bool used = false;
        for (int p = 0; p < m; ++p) {
            bool ok = false;

            for (int i = start; i < n; ++i) {

                if (word1[i] == word2[p]) {
                    ans.push_back(i);
                    start = i + 1;
                    ok = true;
                    break;
                }

                if (!used) {
                    bool canFinish;
                    if (p == m - 1)
                        canFinish = true;
                    else
                        canFinish = (suf[p + 1] != -1 && suf[p + 1] > i);

                    if (canFinish) {
                        used = true;
                        ans.push_back(i);
                        start = i + 1;
                        ok = true;
                        break;
                    }
                }
            }
            if (!ok) return {};
        }
        return ans;
    }
};