class Solution {
public:
int t[5000];
int  fun(int idx , vector<int>&arr , int k ){
    if( idx == arr.size()){
        return 0 ;
    }
    if(t[idx]!=-1){
        return t[idx];
    }
   int result = 0 ;
    int Max = -1 ;
    for(int j = idx ; j < arr.size() && j-idx+1 <= k ; j++){
        Max = max(Max,arr[j]);
        result = max(result , ((j-idx+1)*Max) + fun(j+1,arr,k));
    }
    return t[idx] = result ;
}
    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        memset(t,-1,sizeof(t));
        return fun(0,arr,k);
        
    }
};