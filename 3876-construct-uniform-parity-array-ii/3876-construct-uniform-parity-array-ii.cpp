class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int m = INT_MAX , even = 0 ; 
        for(int i = 0; i < nums1.size() ; i++){
            if(nums1[i] < m ){
                m = nums1[i];
            }
            if(nums1[i] % 2 == 0){
                even++;
            }
        }
        if(even == nums1.size()){
            return true ;
        }
        if( m % 2 == 0){
            return false;
        }
        else{
            return true ;
        }
        return false ;
    }
};