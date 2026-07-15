class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int odd = n * n ;
        int even = n * (n +1);
        int ans ;
        int i =1 ;
        while(i <= even){
            if( even % i == 0 && odd %i ==0){
                ans = i;
            }
            i++;
        }
        return ans ;
    }
};