class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        char sign='+';
        int flag=0,flag1=0;

        for(auto ch:s){
            if(ch>='0'&&ch<='9'){
                ans=ans*10+(ch-'0');
                if(sign=='+'&&ans>INT_MAX)return INT_MAX;
                if(sign=='-'&&ans>2147483648LL)return INT_MIN;
                flag1=1;
            }
            else if(ch==' '){
                if(flag||flag1)break;
            }
            else if(ch=='+'||ch=='-'){
                if(flag||flag1)break;
                sign=ch;
                flag=1;
            }
            else{
                break;
            }
        }

        if(sign=='+')return ans;
        return -ans;
    }
};