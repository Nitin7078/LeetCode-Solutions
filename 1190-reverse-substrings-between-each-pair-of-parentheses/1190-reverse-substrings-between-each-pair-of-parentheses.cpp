class Solution {
public:
    string reverseParentheses(string s) {
        // string s;
        // s.push_back('(');
        // s=s+k;
        // s.push_back(')');
        int a , b , flag = 0 ; 
        stack<char>ans ;
        string arr;
        for(int i = 0 ; i < s.length() ; i++){
            if( s[i] == ')' ){
                b = i ; 
                arr.clear();
                while(ans.top() != '('){
                    arr.push_back(ans.top());
                    ans.pop();
                }
                ans.pop();
                for(int i = 0; i < arr.size() ; i++){
                    ans.push(arr[i]);
                }
            }
            else{
                if( '(' && flag == 0 ){
                    a = i;
                    flag = 1 ;
                }
                ans.push(s[i]);
            }
        }
        string myans;
        while(!ans.empty()){
            myans.push_back(ans.top());
            ans.pop();
        }
        // for(int i = 0; i < a ; i++){
        //     myans.push_back(s[i]);
        // }
        // for(int i = 0; i <arr.length() ; i++){
        //     myans.push_back(arr[i]);

        // }
        // for(int i = b+1 ; i < s.length() ; i++ ){
        //     myans.push_back(s[i]);
        // }
        reverse(myans.begin(),myans.end());
        return myans;
    }
};