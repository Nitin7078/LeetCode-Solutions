class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        int c = 0 ; 
        int arr[100000](0);
        for(int i = 0 ; i < digits.size() ; i++){
            for(int j = 0 ; j<digits.size() ; j++){
                for(int k = 0;k<digits.size() ; k++){
                    if(i != j && j!= k && i != k && digits[i]!=0){
                    long long num = digits[i]*100+digits[j]*10+digits[k];
                    arr[num]++;
                    }
                }
            }
        }
        for(int i = 0 ; i < 10000 ; i++){
            if(arr[i]!= 0 && i % 2 == 0){
                c++;
            }
        }
        return c ;
    }
};