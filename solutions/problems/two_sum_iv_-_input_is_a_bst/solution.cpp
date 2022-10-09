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
    vector <int> tree;
public:
    
    void inorder(TreeNode* root){
        if (!root) return;
        inorder(root->left);
        tree.push_back(root->val);
        inorder(root->right);
    }
    
    bool twoSumSorted(int target){
        
        if (tree.size() < 2 )
            return false;
        for( int i = 0 , j = tree.size()-1 ; i < j ; ){
            int sum = tree[i]+tree[j];
            if ( sum == target ) return true;
            else if ( sum > target) j--;
            else i++;
        }
        
        return false;  
    }
    
    
    bool findTarget(TreeNode* root, int k) {
        
        inorder(root);
        return twoSumSorted(k);
    }
};