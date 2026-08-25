class Solution {
public:
bool find(vector<int>&ans,int k ){
    for(int i = 0; i < ans.size() ;i++){
        if(ans[i] == k){
            return true ;
        }
    }
    return false ;
}
    int missingMultiple(vector<int>& nums, int k) {
        for(int i = k ; ; i = i + k ){
            if(!find(nums ,i))
            return i ;
        }
        return 69;
    }
};