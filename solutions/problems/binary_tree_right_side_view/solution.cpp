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
    vector<int> rightSideView(TreeNode* root) {
        
        if( !root )
            return {};
        
        vector <int> ans;
        queue <TreeNode*> q;
        q.push(root);
        
        while( !q.empty()){
            
            TreeNode* curr;
            int sz = q.size();
            
            for( ; sz-- ; q.pop()){
                curr = q.front();
                if( curr->left) q.push(curr->left);
                if( curr->right) q.push(curr->right);
            }
            
            ans.push_back(curr->val);
        }
        
        return ans;    
    }
};