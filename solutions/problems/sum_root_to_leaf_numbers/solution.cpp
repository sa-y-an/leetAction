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
    
    vector <int> rootLeaf;
    
    void inorder(TreeNode* root, int acc = 0){
        
        int currNum = acc*10 + root->val;        
        if( root->left ) inorder(root->left, currNum );
        if( root->right ) inorder(root->right, currNum);
        
        if( not root->right and not root->left ) {
            rootLeaf.push_back(currNum);
        }
    }
    
    int sumNumbers(TreeNode* root) {
        
        inorder(root);
        return accumulate(rootLeaf.begin(), rootLeaf.end(),0);
    }
};