class Solution {
public:
    int minLengthAfterRemovals(string s) {
        int a = 0 , b = 0 ;
        for(int i = 0 ; i < s.length() ; i++){
            if(s[i] == 'b'){
                b++;
            }
            else{
                a++;
            }
        }
        return abs(b-a);
    }
};