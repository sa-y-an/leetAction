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
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    unordered_map <int,int> umap;
    
    void inorderTraversal(TreeNode* root){
        
        if(not root) return ;
        
        inorderTraversal(root->left);
        umap[root->val]++;
        inorderTraversal(root->right);
        
    }
    
    vector<int> findMode(TreeNode* root) {
        
        int max_elt = 0;
        
        inorderTraversal(root);
        
        for( auto it : umap){
            max_elt = max(max_elt, it.second);
        }
        
        vector <int> ret;
        
        for( auto it : umap){
            if ( it.second == max_elt ) ret.push_back(it.first);
        }
        
        
        
        return ret;
        
    }
};