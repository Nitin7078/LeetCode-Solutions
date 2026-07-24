class Solution {
public:
    int buyChoco(vector<int>& num, int money) {
        int first = INT_MAX;
        int index ;
        int second = INT_MAX;
        for(int i = 0 ; i <  num .size() ; i++){
            if( num[i] < first) {
                first = num[i];
                index = i ; 
            }
        }
        num[index] = INT_MAX;
        for(int i = 0 ; i <  num .size() ; i++){
            if( num[i] < second) {
                second = num[i];
                index = i ; 
            }
        }
        int ans =  money - ( first + second );
        if(ans >= 0){
            return ans ;
        }
        return money ;
    }
};