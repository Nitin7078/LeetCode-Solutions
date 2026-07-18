class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int c = 0 ;
        for(int i = 0 ; i < intervals.size() ; i++){
            int mn = intervals[i][0];
            int mx = intervals[i][1];
            for(int j = 0 ; j < intervals.size() ; j++){
                if( i != j && (intervals[j][0] <= mn && intervals[j][1] >= mx) ){
                    c++;
                    break;
                }
            }
        } 
        return intervals.size() - c;
    }
};