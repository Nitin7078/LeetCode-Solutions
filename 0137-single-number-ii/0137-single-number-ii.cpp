class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        int bit ;
        for( bit = 0; bit < 32; bit++){
            
        int c = 0;
            for(int x : nums){
                if((x >> bit) & 1)
                    c++;
            }
        int rem = c % 3;
        if(c % 3 == 1){
            ans = ans | (1 << bit);
        }
        }
        return ans ;
    }
};