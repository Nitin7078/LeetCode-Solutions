class Solution {
public:
    string maxSumOfSquares(int num, int sum1) {
        // long long start = pow(10,num-1);
        // long long end = 0;
        // for(int i= 0 ; i< num ; i++){
        //     end = end*10+9;
        // }
        // long long ans=0;
        // long long i = end;
        
            
        // while(i >= start ){
        //     long long sum = 0; 
      
        // long long temp = i;
        //     while(temp!=0){
        //         sum+=temp%10;
        //         temp/=10;
        //     }
        //     if(sum == sum1){
        //             ans=i;
        //             break;
        //     }
            
        //     i--;
        // }
        // if(ans == 0 ){
        //     return "";
        // }
        // string answer =  to_string(ans);
        // return answer;
        // // return "";
        if (sum1 > 9 * num) {
            return "";
        }

        string answer = "";

        for (int i = 0; i < num; i++) {
            int digit = min(9, sum1);
            answer += to_string(digit);
            sum1 -= digit;
        }

        return answer;
        
    }
};