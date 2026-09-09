class Solution {
public:
    long long countCommas(long long n) {
        if(n < 1000){
            return 0 ; 
        }
        int digit = 0 ;
        long long k = n ; 
        while(k != 0 ){
            k/=10;
            digit++;
        }
        // vector<int>ans;
        // for(int i = 4 ; i <= digit ; i++){
        //     ans.push_back(i);
        // }
        long long sum = 0 ; 
        for(int i = 4; i < digit ; i++){
            int commas = (i-1) / 3 ;
            sum = sum + (pow(10 ,i-1)*9 * commas);

        }

        n = n - pow(10 ,digit-1 ) + 1 ;

        sum = sum + n * ( (digit-1) / 3 ) ;
        return sum ;
    }
};