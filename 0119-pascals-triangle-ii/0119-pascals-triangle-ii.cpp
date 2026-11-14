class Solution {
public:
    vector<int> getRow(int rowIndex) {
       
        
        vector<int>ans ;
        ans.push_back(1);
        long long sum = 1; 
        rowIndex++;
        for(int i = 1 ; i < rowIndex; i++){
            sum = sum*(rowIndex-i) /i;
            ans.push_back(sum);
        }
        
        return ans;
    }
};