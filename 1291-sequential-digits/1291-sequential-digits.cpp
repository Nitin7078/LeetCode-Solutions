class Solution {
public:
vector<int>ans;
int firstdig ;
int secdig ;
int low1 ;
int high1 ;
void check(int num ){
    int k = num ;
    if(firstdig <= secdig){
        long long sum = 0 ; 
        for(int i = 1 ; i <= firstdig ; i++){
            sum = sum * 10 + k ;
            k++; 
        }
        if(sum >= low1 && sum <= high1)
            ans.push_back(sum);
        num++;
        if( num <= 10 - firstdig){
            check(num);
        }
        else{
            firstdig++;
            num = 1 ;
            check(num);
        }
    }
}
    vector<int> sequentialDigits(int low, int high) {
        low1 = low ;
        high1 = high ;
        int c= 0 ; 
        int k = low ; 
        while( k != 0 ){
            c++;
            k/=10;
        }
        firstdig = c ; 
        c = 0 ;
        k = high ;
        while(k != 0 ){
        c++;
        k /= 10 ;
        }
        secdig = c ;
        check(1);


        return ans ;
    }
};