class Solution {
public:
int  fun(int num ){
    int c = 0;
    if(num<100){
        return false;
    }
    vector<int>nums;
    while(num != 0){
        nums.push_back(num%10);
        num = num / 10 ;
    }
    // reverse(nums.begin() ,nums.end());
    for(int i = 1 ; i < nums.size()-1 ; i++){
        if ( (nums[i] > nums[i-1] && nums[i] > nums[i+1]) || (nums[i] < nums[i-1] && nums[i] < nums[i+1]) ) {
            c++;
        }
    }
    return c;
}
    int totalWaviness(int num1, int num2) {
        int c = 0 ;
        for(int i = num1 ; i <= num2 ; i ++){
            c+=fun(i);
        }
        return c ;
    }
};