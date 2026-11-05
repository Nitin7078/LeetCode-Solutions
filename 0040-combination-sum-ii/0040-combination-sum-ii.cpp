class Solution {
public:
vector<vector<int>>ans1;
void ans(int idx , int target , vector<int>&candidates , vector<int>&ds){
    if(target == 0 ){
        ans1.push_back(ds);
        return ;
    }
    for(int i = idx ; i < candidates.size() ; i++){
        if(i>idx && candidates[i] == candidates[i-1] ){
            continue;
        }
        else{
            if(candidates[i]>target)
                break;
            ds.push_back(candidates[i]);
            ans(i+1,target-candidates[i],candidates,ds);
            ds.pop_back();
        }
    }
    // ans(idx+1,target,candidates,ds);
    return ;
}
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<int>ds;
        
        sort(candidates.begin(), candidates.end());
        
        ans(0,target,candidates,ds);
        return ans1 ;
    }
};