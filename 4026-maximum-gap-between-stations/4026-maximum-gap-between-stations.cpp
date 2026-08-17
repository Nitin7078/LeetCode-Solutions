class Solution {
public:
    int maximumGap(string skill, string station) {
        if(skill.size() == 1){
            return 0;
        }
        vector<int>left( skill.size() , -1);
        int k = 0;
        for(int i = 0; i < station.size() && k<skill.size() ; i++){
            if(station[i] == skill[k]){
                left[k] = i;
                k++;
            }
        }   
        vector<int>right( skill.size() , -1);
        int k2 = skill.size()-1;
        for(int i = station.size() -1; i >= 0 && k2 >= 0 ; i--){
            if(station[i] == skill[k2]){
                right[k2] = i;
                k2--;
            }
        } 
        int ans = INT_MIN ;
        for(int i = 0; i < skill.size()  -1; i++){
             ans = max(ans, right[i + 1] - left[i] );
        }
        return ans;
    }
};