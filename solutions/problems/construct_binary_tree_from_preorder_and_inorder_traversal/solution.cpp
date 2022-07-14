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
    unordered_map <int,int> imap;
    int preorderIdx;
public:
    
    TreeNode* build(vector <int> &preorder, int l, int r){
        
        if( l > r )
            return nullptr;
        
        int rootVal = preorder[preorderIdx++];
        TreeNode* root = new TreeNode(rootVal);
 
        root->left = build(preorder,l,imap[rootVal]-1);
        root->right = build(preorder,imap[rootVal]+1, r);
        
        return root;
    }
    
    
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
        int n = inorder.size();
        for( int j = 0 ; j < n ; j++){
            imap[inorder[j]] = j;
        }
        preorderIdx = 0;
        return build(preorder,0,n-1);
    }
};