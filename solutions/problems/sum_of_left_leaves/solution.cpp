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
    
    int dfs(TreeNode* root,TreeNode* parent){
        
        if( !root) return 0;
        int ans = 0;
        ans += dfs(root->left, root);
        ans += dfs(root->right, root);
        
        if( !root->left && !root->right && parent && parent->left == root ){
            ans += root->val;
        }
        
        return ans;
    }
    
    int sumOfLeftLeaves(TreeNode* root) {
        
        return dfs(root,nullptr);
    }
};