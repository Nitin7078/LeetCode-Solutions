class Solution {
public:
    int maximumLengthSubstring(string s) {
        vector<int>arr(26,0);
        int j = 0;
        int ans =1 ;
        for(int i = 0 ; i< s.length() ; i++){
            int flag =0 ;
            for(int k = j ; k <= i ; k++){
                arr[s[k] - 'a']++;
                if(arr[s[k] -'a'] < 3){}
                else{flag = 1 ;
                    // i--;
                    j++;
                    break;
                }
            }
            for(int k = 0; k < 26 ; k ++){
                arr[k] = 0;
            }
            if(flag == 0 ){
                ans = max(ans , i-j+1);
            }

        }
        return ans ;
    }
};