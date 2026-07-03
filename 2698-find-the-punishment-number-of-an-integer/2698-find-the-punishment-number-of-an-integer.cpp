class Solution {
public:
bool check(string &s , int idx ,int sum,int target){
    if(idx == s.length()){
        return sum == target;
    }
    int num = 0 ; 
    for(int j = idx ; j < s.length() ; j++){
        num = num*10 + (s[j]-'0') ;
        if(check(s,j+1,num+sum,target)){
            return true;
        }
    }
    return false;
}
    int punishmentNumber(int n) {
        int ans = 0;
        for(int i = 1 ; i <= n ; i++){
            int k = i*i;
            string s;
            while(k != 0){
                s.push_back((k%10)+'0');
                k /=10;
            }
            reverse(s.begin() ,s.end());
            if(check(s,0,0,i)){
                ans+= i*i ;
            }
        }
        return ans ;
    }
};