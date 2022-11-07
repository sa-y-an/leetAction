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

    unordered_map <TreeNode*, int> subTreeSum;
    const int m = 1e9+7;
    
    void dfs( TreeNode* root, TreeNode* parent = nullptr){
        
        if( not root) return;
        subTreeSum[root] += root->val;
        if( root->left ){
            dfs( root->left, root);
            subTreeSum[root] += subTreeSum[root->left];
        }
        if(root->right){
            dfs(root->right, root);
            subTreeSum[root] += subTreeSum[root->right];
        }
    }
    
    
    int maxProduct(TreeNode* root) {
        dfs(root);
        int wholeTreeSum = subTreeSum[root];
        long long maxProduct = 0;
        
        for( auto node: subTreeSum){
            if( node.first == root ) continue;
            int currSum = node.second;
            maxProduct = max(maxProduct, ((wholeTreeSum-currSum)*1LL*currSum));
        }
        
        return maxProduct%m;
    }
};