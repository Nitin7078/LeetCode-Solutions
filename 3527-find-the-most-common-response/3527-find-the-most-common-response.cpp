class Solution {
public:
    string findCommonResponse(vector<vector<string>>& responses) {
        unordered_map<string,int>mp1;
        for(int i = 0 ; i < responses.size() ; i++){
            unordered_map<string,int>mp2;
            for(int j = 0 ; j < responses[i].size() ; j++){
                mp2[responses[i][j]]++;
                if( mp2[responses[i][j]] == 1 ){
                    mp1[responses[i][j]]++;
                }
            }
        }
        int ans = INT_MIN;
        string answer;
        for(auto it : mp1){
            if(ans<it.second){
                ans = it.second;
                answer = it.first;
            }
            else if(ans == it.second){
                if (answer.compare( it.first) > 0){
                    answer = it.first;
                }
            } 
        }
        return answer ;
    }
};