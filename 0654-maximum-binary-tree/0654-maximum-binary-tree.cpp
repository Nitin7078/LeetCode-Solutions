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
TreeNode* build(vector<int>nums, int left, int right){
    if(left > right ){
        return NULL;
    }
    int ele = left;
    for(int i = left ; i<= right ; i++){
        if(nums[ele] < nums[i]){
            ele = i;
        }
    }
    TreeNode* root = new TreeNode(nums[ele]);
    // root->left = NULL;
    // root->right = NULL;
    // root=temp;
    root->left = build(nums , left , ele-1);
    root->right = build(nums,ele+1 , right);
    return root;
}
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return build(nums,0,nums.size()-1);
    }
};