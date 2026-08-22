class Solution {
public:
int digitsum(int num ){
    int sum = 0;
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum ;
}
int digitproduct(int num ){
    int product = 1; 
    while(num>0){
        product *= num%10;
        num/=10;
    }
    return product;
}
    bool checkDivisibility(int n) {
        return (n % (digitsum(n) + digitproduct(n) ) ) == 0 ;
    }
};