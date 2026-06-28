class Solution {
public:
    bool checkIfCanBreak(string s1, string s2) {
        bool ans = true ;
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        for(int i = 0 ; i < s1.size() ; i++){
            if(s2[i]>=s1[i]){

            }
            else{
                ans = false ;
                break;
            }
        }
        if(ans== true ){
            return ans ;
        }
        int flag = 0 ; 
        for(int i = 0 ; i < s1.size() ; i++){
            if(s1[i]>=s2[i]){

            }
            else{
                flag = 1 ; 
                ans = false ;
                break;
            }
        }
        if(flag == 0){
            return true ;
        }
        return ans ;
    }
};