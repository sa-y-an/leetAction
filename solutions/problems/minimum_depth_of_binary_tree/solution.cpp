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
    int depth;
    
    void dfs(TreeNode* root, int deep = 1){
        if( root->left) dfs(root->left, deep+1);
        if( root->right ) dfs(root->right, deep+1);
        if( not root->left and not root->right){
            depth = min(depth,deep);
        }
    }
    
    int minDepth(TreeNode* root) {
        if( not root) return 0;
        depth = INT_MAX;
        dfs(root);
        return depth;
    }
};