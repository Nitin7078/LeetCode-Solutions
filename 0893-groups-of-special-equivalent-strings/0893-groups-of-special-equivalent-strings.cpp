class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        unordered_map<string,int>mp;
        for(int i = 0 ; i < words.size();i++){
            string even;
            string odd;
            for(int j =0 ; j < words[i].length() ; j++){
                if( j%2 ==0){
                    even.push_back(words[i][j]);
                }
                else{
                    odd.push_back(words[i][j]);
                }
            }
            sort(even.begin(),even.end());
            sort(odd.begin(),odd.end());
            string a1;
            int even1=0,odd1=0;
            for(int j = 0 ; j < words[i].size() ; j++){
                if( j % 2==0){
                    a1.push_back(even[even1++]);
                }
                else{
                    a1.push_back(odd[odd1++]);
                }
            }
            mp[a1]++;
        }
        int ans = INT_MIN;
        for(auto it : mp){
            if(it.second > ans){
                ans = it.second;
            }
        }
        return mp.size();
    }
};