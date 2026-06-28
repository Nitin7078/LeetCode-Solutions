class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair< double,pair<int,int> >>ans;
        for(int i = 0 ; i < points.size() ; i++){
            ans.push_back( { sqrt(points[i][0]*points[i][0] + points[i][1]*points[i][1] ) ,{points[i][0],points[i][1]}  } );
        }
        sort(ans.begin(),ans.end());
        vector<vector<int>>ans1;
        for(int i = 0 ; i < k ; i ++){
        ans1.push_back( {ans[i].second.first , ans[i].second.second } );
        }
        return ans1 ;
    }
};