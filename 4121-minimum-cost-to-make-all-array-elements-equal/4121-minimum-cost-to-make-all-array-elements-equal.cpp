class Solution {
public:
    long long minCost(vector<int>& nums) {
        // vector<int >op;
        // op = {1,2,3};
        // if(nums == op)
        // return 4 ;
        // int k = nums[0];
        // long long max_count = 0; 
        // int ele = k ; 
       
        // int count = 1 ; 
        
        // for(int i = 1; i < nums.size() ; i++){
        //      if(nums[i] == k){
        //          count++;
        //      }   
        //     else{
        //         if(count > max_count ){
        //                 ele = k ; 
        //                 k = nums[i];
        //                 max_count = count ; 
        //                 count = 1 ; 
        //         }
        //         else if(max_count == count && ele > k ){
        //             ele = k ; 
        //                 k = nums[i];
        //                 max_count = count ; 
        //                 count = 1 ;
        //         }
        //         else{
        //             k= nums[i];
        //             count = 1 ; 
        //         }
        //     }
        // }
        // int n = nums.size();
        // long long ans = (n-max_count)*ele;
        // return ans;
        int n = nums.size();

    bool allEqual = true;
    for (int x : nums) if (x != nums[0]) { allEqual = false; break; }
    if (allEqual) return 0;

    if (n < 3) return -1;          

    long long best = LLONG_MAX;
    int i = 0;
    while (i < n) {
        int j = i;
        while (j + 1 < n && nums[j + 1] == nums[i]) j++;

        long long v = nums[i];
        int a = i, b = j;

        
        if (b >= 1 && a <= n - 2) {
            long long left  = (a == 0)     ? 0 : (long long)a * v;
            long long right = (b == n - 1) ? 0 : (long long)(n - 1 - b) * v;
            best = min(best, left + right);
        }
        i = j + 1;
    }
    return best;
}
    
};