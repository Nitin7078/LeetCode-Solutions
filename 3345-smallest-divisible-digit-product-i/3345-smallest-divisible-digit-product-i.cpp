class Solution {
public:
    int smallestNumber(int n, int t) {
        while(1){
            int num = n ;
            int sum = 1 ; 
            while(num != 0 ){
                sum = sum *  (num% 10);
                num = num / 10 ;
            }
            if( sum % t == 0 ){
                return n;
            }
            n++;
        }
        return 0 ;
    }
};