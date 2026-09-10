/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
int sum(TreeNode* root , int &count ){
    if(root == NULL){
        return 0 ; 
    }
    count++;
    int lsum = sum(root->left , count);
    int rsum = sum(root->right , count);
    return lsum+rsum+root->val;
}
int ans = 0 ; 
void solve(TreeNode* root){
    if(root == NULL){
        return ;
    }
    int count = 0 ; 
        int sum_1 = sum(root , count);
        if( (sum_1/count) == root->val ){
            ans++;
        }
            solve(root->left);
            solve(root->right);
            return ;
        
}
    int averageOfSubtree(TreeNode* root) {
        solve(root);
        return ans ;
    }
};