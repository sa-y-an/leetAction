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


  // height diameter
  pair <int,int> dfs(TreeNode* root){
    
    if ( not root) return {0,0};
    
    auto left = dfs(root->left);
    auto right = dfs(root->right);
    
    int height = max( left.first, right.first ) + 1;
    int diameter = max({left.second, right.second, left.first+right.first+1});
    
    return {height, diameter};
    
  }
  
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
  
  
    int diameterOfBinaryTree(TreeNode* root) {
        return dfs(root).second-1;
    }
};