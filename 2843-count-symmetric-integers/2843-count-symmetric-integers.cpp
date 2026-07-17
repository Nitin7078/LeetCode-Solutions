class Solution {
public:
bool check(int i ){
    vector<int>num ;
    while(i != 0 ){
        num.push_back( i %10 ); 
        i = i / 10 ;
    }
    int j = 0 ;
    int k = num.size() -1;
    if( num.size() % 2!= 0){
        return false;
    }
    int sum1 = 0 , sum2 = 0 ; 
    while(j<k){
        sum1+=num[j];
        j++;
        sum2+=num[k];
        k--;
    }
    if(sum1 == sum2 ){
        return true ;
    }
    
        return false; 
    

}
    int countSymmetricIntegers(int low, int high) {
        vector<int>ans;
        for(int i = low ; i <= high ; i++){
           if ( check(i) ){
            ans.push_back(i) ;
           }
        }
        return ans.size() ;
    }
};