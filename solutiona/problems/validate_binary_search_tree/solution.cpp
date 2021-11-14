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
    
    queue <int> ret;
    bool flag = true;    
    
    void inorderTraversal(TreeNode* root) {
        
        if( root == NULL ) return ;
        
        inorderTraversal(root->left);
        
        ret.push(root->val);
        
        if( ret.size() > 1 ) {
            
            if( ret.front() >= ret.back() ) {
                flag = false;
                return; 
            }
            ret.pop();

        }
     
        
        inorderTraversal(root->right);
        
    }
    
    bool isValidBST(TreeNode* root) {
                
        if( root->left || root->right ) {           
            inorderTraversal(root);
        }
        
        
        
        return flag;
    }
};