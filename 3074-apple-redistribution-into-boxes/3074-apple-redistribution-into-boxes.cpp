class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        sort(capacity.begin() , capacity.end() );
        int sum = 0;
        for(int i : apple){
            sum+=i;
        }
        int c = 0 ;
        for(int i = capacity.size() -1; i>=0 ; i--){
            if(sum > 0){
                sum-=capacity[i];
                c++;
            }
        }
        return c ;
    }
};