class Solution {
public:
vector<string>ans;
void fun (int n , string arr,int idx , string ds, int open , int close ){
    if(idx == 2*n){
        ans.push_back(ds);
        return ;
    }
    //take 
    if(open < n){
    ds.push_back('(');
    fun(n , arr, idx+1,ds,open+1,close);
    
     ds.pop_back();
    }

    //not take
    if(close<open){ 
    ds.push_back(')');
    fun(n , arr, idx+1,ds,open,close+1);
    // ans.push_back(ds);
    }

}
    vector<string> generateParenthesis(int n) {
        string arr;
        for(int i =0 ; i < n ; i++){
            arr.push_back('(');
        }
        string ds;
        fun(n,arr,0,ds,0,0);
        return ans ;
    }
};