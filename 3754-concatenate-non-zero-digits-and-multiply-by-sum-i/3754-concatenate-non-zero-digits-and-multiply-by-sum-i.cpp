class Solution {
public:
    long long sumAndMultiply(int num ) {
        vector<int>ans;
        int k = 0; 
        // int num = n ;
        while(num != 0){
            if(num %10 != 0 ){
                ans.push_back(num%10);
                k +=num%10;
            }
            num/=10;
        }
        long long  sum = 0; 
        for(int i = ans.size()-1 ; i >= 0  ;i--){
            sum = sum *10 + ans[i];
        }

        return sum * k;
    }
};