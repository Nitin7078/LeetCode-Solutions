class Solution {
public:
    int gcd(int a , int b ){
        while(b){
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
    }
    long long gcdSum(vector<int>& nums) {
        int max_ = INT_MIN;
        vector<int> ans ;
        for(int i = 0 ; i < nums.size() ; i++){
            max_= max(max_ , nums[i]);
            ans.push_back(gcd(max_,nums[i]));
        }
        sort(ans.begin(),ans.end());
        long long sum = 0 ; 
        int i = 0 , j = ans.size()-1;
        while( i < j ){
            sum +=gcd(ans[j],ans[i]);
            i++;
            j--;
        }
        return sum ;
    }
};