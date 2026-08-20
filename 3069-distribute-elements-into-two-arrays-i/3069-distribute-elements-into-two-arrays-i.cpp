class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        vector<int>arr1;
        vector<int>arr2;
        arr1.push_back(nums[0]);
        arr2.push_back(nums[1]);
        int a = 0 ;
        int b = 0 ;
        for(int i = 2 ; i< nums.size() ; i++){
            if(arr1[a] > arr2[b]){
                arr1.push_back(nums[i]);
                a++;
            }
            else{
                arr2.push_back(nums[i]);
                b++;
            }
        }
        a = arr1.size()-1;
        for(int i = 0 ; i < arr2.size() ; i++){
            arr1.push_back(arr2[i]);
        }
        return arr1;
    }
};