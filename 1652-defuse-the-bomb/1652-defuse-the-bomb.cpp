class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        vector<int>ans ;
        if(k > 0){
            for(int i = 0; i < code.size() ; i++){
                int sum = 0 ; 
                int jp = i+1 ;
                jp = (jp)%code.size();
                for(int j = 0 ; j < k ; j++ ){
                    sum += code[jp];
                    jp = (jp+1)%code.size();
                }
                ans.push_back(sum);
            }
        }
        else if(k < 0){
            for(int i = 0; i < code.size() ; i++){
                int sum = 0 ; 
                int  jp = i -1;
                if(jp <0){
                    jp = code.size()-1;
                }
                for(int j = 0  ; j < abs(k) ; j++  ){
                    sum += code[jp];
                    if( jp == 0 ){
                        jp = code.size()-1;
                    }
                    else
                        jp--;
                }
                ans.push_back(sum);
            }
        }
        else{
            for(int it: code){
                ans.push_back(0);
            }
        }
        return ans ;
    }
};