class Solution {
public:
    // Decompose `a` into digits 2..9 (using the largest digit first, which
    // minimizes digit count / gives the lexicographically smallest result),
    // then pad with '1's up to length b if it's shorter.
    string func(long long a, int b) {
        string str;
        for (int dig = 9; dig >= 2; dig--) {
            while (a % dig == 0) {
                str.push_back(dig + '0');
                a = a / dig;
            }
        }

        if (a != 1)
            return "";
        while ((int)str.length() < b) {
            str.push_back('1');
        }

        reverse(str.begin(), str.end());
        return str;
    }

    string smallestNumber(string num, long long t) {
        int n = num.length();
        string s = num;

        long long temp = t;
        for (auto it : {2, 3, 5, 7}) {
            while (temp % it == 0) {
                temp = temp / it;
            }
        }
        if (temp != 1) {
            return "-1";
        }

        vector<long long> ans(n + 1, t);
        for (int i = 0; i < n; i++) {
            long long dig = s[i] - '0';
            if (dig == 0) {
                break;
            }
            ans[i + 1] = ans[i] / gcd(ans[i], dig);
        }

        int zeropos = s.find('0');

        if (zeropos == (int)string::npos && ans[n] == 1) {
            return s;
        }

        int zero = n - 1;
        if (zeropos != (int)string::npos) {
            zero = zeropos;
        }

        for (int i = zero; i >= 0; i--) {
            long long required = ans[i];
            int free = n - 1 - i;

            for (int dig = s[i] - '0' + 1; dig <= 9; dig++) {
                long long frequired = required / gcd(required, (long long)dig);

                string rn = func(frequired, free);

                if ((int)rn.length() == free) {
                    return s.substr(0, i) + char(dig + '0') + rn;
                }
            }
        }

    
        return func(t, n + 1);
    }
};