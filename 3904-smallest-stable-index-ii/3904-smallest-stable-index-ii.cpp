class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>pref_max;
        int max = INT_MIN;
        for(int i = 0; i < nums.size() ; i++){
            if(nums[i] > max){
                max = nums[i];
            }
            pref_max.push_back(max);
        }
        vector<int>suf_min;
        int min = INT_MAX;
        for(int i = nums.size()-1 ; i >= 0 ;i--){
            if(nums[i] < min){
                min = nums[i];
            }
            suf_min.push_back(min);
        }

        for(int i = 0 , j = nums.size() -1 ; i < nums.size() && j >=0 ; i++ , j--){
            if(pref_max[i] - suf_min[j]  <= k){
                return i ;
            }
        }

        return -1;
    }
};