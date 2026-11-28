class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = height[0];
        int k = 1;
        int ans = 0 ;
        int i= 0 , j = height.size()-1;
        while( i < j ){
            int h = min(height[i],height[j]);
            int w = j - i ;
            int vol = h * w;
            ans = max(vol,ans);
            if(h == height[i]){
                i++;
            }
            else{
                j--;
            }

        }
        return ans ;
    }
};