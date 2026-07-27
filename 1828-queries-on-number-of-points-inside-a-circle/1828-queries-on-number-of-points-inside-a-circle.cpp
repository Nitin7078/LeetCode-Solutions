class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& q) {
        vector<int>ans ; 
        for(int i = 0 ; i < q.size() ; i++ ){
            int c = 0 ; 
            for(int j = 0 ; j < points.size() ; j++){
                long long dx = points[j][0] - q[i][0];
                long long dy = points[j][1] - q[i][1];

                if(dx*dx + dy*dy <= 1LL*q[i][2]*q[i][2])
                    c++;
                }
            ans.push_back(c);
        }
        return ans ;
    }
};