class Solution {
public:
    int reverse(int x) {
        int  dig,sum = 0 ;
        while(x != 0 ){
            dig = x% 10 ;
            if(sum < ( pow(2,31)-1 ) / 10 && sum > ( -1*pow(2,31) ) / 10 )
            sum = sum *10 +dig;
            else 
            return 0;
            x = x / 10;
        }
        return sum ;
    }
};