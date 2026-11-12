class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for(int i = 0 ;i < nums2.size() ; i++){
            nums1.push_back(nums2[i]);
        }
        sort(nums1.begin() , nums1.end());
        int k = nums1.size()/2;
        double ans ;
        if(nums1.size()%2 !=0){
            ans = nums1[k];
        }
        else{
            ans = (nums1[k]+nums1[k-1])/2.0;
        }
        return ans ;
    }
};