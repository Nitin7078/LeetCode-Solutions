class Solution {
public:
vector<string> ans;
void count (int idx ,string &ele , string &ds , int n){
    if( ds.length() == n ){
        ans.push_back(ds);
        return ;
    }

    //take 
    // count(idx ,ele , ds , n );

    //not_take
    for(int i = idx ; i < 5 ; i++){
    ds.push_back(ele[idx]);
        count(i ,ele , ds,n );
    ds.pop_back();
    }
    return ;
}
    int countVowelStrings(int n) {
        string ele = "aeiou";
        string ds;
        count(0,ele,ds,n);
        return ans.size();
    }
};