class Solution {
public:
    int findGCD(vector<int>& nums) {
        int max_ = INT_MIN;
        int min_ = INT_MAX;
        for(int i : nums){
            max_ = max( max_ , i);
            min_ = min( min_ , i);
        }
        return gcd(max_,min_);
    }
};