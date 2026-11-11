class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>real_ans;
        for(int j = 1 ; j <= numRows ; j++){
        vector<int>ans ;
        ans.push_back(1);
        int sum = 1; 
        for(int i = 1 ; i < j; i++){
            sum = sum*(j-i) /i;
            ans.push_back(sum);
        }
        real_ans.push_back(ans);
        }
        return real_ans;
    }
};