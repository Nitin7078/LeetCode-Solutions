class Solution {
public:
    int cal(vector<vector<int>>&mat,int i , int j , int k){
        int size1 = mat.size();
        int size2 = mat[0].size();
        int i0 = i - k > 0 ? i-k : 0;
        int j0 = j - k > 0 ? j-k : 0;
        int i1 = i +k >= size1 ? size1-1 : i+k;
        int j1 = j +k >= size2 ? size2-1 : j+k;

        int sum = 0 ;

        for(int a = i0 ; a <= i1 ; a++){
            for(int b = j0 ; b <= j1 ; b++){
                sum += mat[a][b];
            }
        }
        return sum ;
    }
    vector<vector<int>> matrixBlockSum(vector<vector<int>>& mat, int k) {
        vector<vector<int>>ans(mat.size(),vector<int>(mat[0].size(),0));
        for(int i = 0 ; i < ans.size() ; i++){
            for(int j = 0 ; j < ans[0].size() ; j++){
                int sum = cal(mat,i,j,k );
                ans[i][j] = sum ;
            }
        }
        return ans;
    }
};