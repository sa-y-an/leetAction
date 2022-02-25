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
    unordered_map <TreeNode*, int> SubTreeSum; 
    
    void dfs(TreeNode* root, TreeNode* parent = nullptr){
        
        if( not root ) return;
        SubTreeSum[root] = root->val;
        
        if( root->left){
            dfs(root->left);
            SubTreeSum[root] += SubTreeSum[root->left];
        }
        if( root->right ){
            dfs(root->right);
            SubTreeSum[root] += SubTreeSum[root->right];
        }
        
    }
    
    vector<int> findFrequentTreeSum(TreeNode* root) {
        dfs(root);
        unordered_map <int,int> fmap;
        for( auto subSums : SubTreeSum ){
            fmap[subSums.second]++;
        }
        
        int maxfreq = 0;
        for( auto pr : fmap )
            maxfreq = max(pr.second, maxfreq);
    
        vector <int> ans;
        
        for(auto pr : fmap)
            if( pr.second == maxfreq) ans.push_back(pr.first);
        
        return ans;
        
    }
};