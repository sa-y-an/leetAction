/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    
    unordered_map <TreeNode*, TreeNode* > parent;
    
    void dfs(TreeNode* vertex, TreeNode* par=nullptr){
        
        if( not vertex) return;
        
        parent[vertex] = par;
        dfs(vertex->left, vertex);
        dfs(vertex->right, vertex);   
    }
    
    vector <TreeNode*> makePath(TreeNode* root){
        vector <TreeNode*> ret;
        ret.push_back(root);
        while(parent[root]){
            ret.push_back(parent[root]);
            root = parent[root];
        }
        
        reverse(ret.begin(), ret.end());
        return ret;
    }
    
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        dfs(root);
        
		vector <TreeNode*> path1 = makePath(p);
		vector <TreeNode*> path2 = makePath(q);

		TreeNode* lca = nullptr;
        
		for( int i = 0 ; i < min(path1.size(), path2.size()) ; i++){
			if( path1[i] == path2[i]) {
                lca = path2[i];
            }
			else break;
		}
        
        return lca;
        
    }
};