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
    vector <int> preOrder;
    
    void traverse(TreeNode* root){
        if ( not root) return;
        preOrder.push_back(root->val);
        traverse(root->left);
        traverse(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        traverse(root);
        return preOrder;
    }
};