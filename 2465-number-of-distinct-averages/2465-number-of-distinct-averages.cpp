class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        unordered_map<double,int>mp;
        int j = nums.size()-1;
        for(int i = 0 ; i < nums.size() /2 ; i++){
            mp[ ( nums[i] + nums[j--] ) / 2.0 ]++;
        }
        int c = 0 ; 
        for(auto it : mp){
            c++;
        }
        return c ;
    }
};