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
    int target;
public:
    
    bool dfsSum(TreeNode* node ,int acc = 0){   
        if( node->right) if(dfsSum(node->right,acc+node->val)) return true;
        if( node->left ) if( dfsSum(node->left ,acc+node->val)) return true;
        if( (not node->right) and (not node->left) ) return (acc+node->val)==target;
        return false;;
    }
    
    bool hasPathSum(TreeNode* root, int targetSum) {
        target = targetSum;
        if( not root ) return false;        
        return dfsSum(root);
    }
};