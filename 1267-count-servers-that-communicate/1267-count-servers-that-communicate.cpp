class Solution {
public:
    int countServers(vector<vector<int>>& grid) {
        vector<int>row;
        vector<int>col;
        for(int i = 0; i < grid.size() ; i++){
            int c = 0 ;
            for(int j = 0 ; j < grid[i].size() ; j++ ){
                if(grid[i][j] == 1){
                    c++;
                }
            }
            row.push_back(c);
        }
        for(int i = 0 ; i < grid[0].size() ;i++){
            int c = 0;
            for(int j = 0 ; j < grid.size() ; j++){
                if(grid[j][i] == 1){
                    c++;
                }
            }
            col.push_back(c);
        }
        int ans = 0;
        for(int i = 0 ; i < grid.size() ;i++){
            for(int j = 0 ; j < grid[i].size() ;j++){
                if(grid[i][j] == 1){
                    if(row[i]>1||col[j]>1){
                        ans++;
                    }
                }
            }
        }
        return ans ;
    }
};