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
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    vector < TreeNode* > targets;
    int T;
    int L;
    

    vector <int> ans;
    unordered_map <TreeNode*, int > level;
    unordered_map <TreeNode*, TreeNode* > parent;
    unordered_set < TreeNode* > visited;
    
    void inorder(TreeNode* root,TreeNode* par = nullptr){
        if( not root ) return;
        inorder(root->left,root);
        parent[root] = par;
        inorder(root->right,root);
    }
        
    

    void bfs(TreeNode* root){
        
        level[root] = 0;
        queue <TreeNode*> q;
        q.push(root);
        
        
        while( not q.empty()){
            
            TreeNode* currVer = q.front();
            visited.insert(currVer);
            q.pop();
            
            vector <TreeNode*> children = {currVer->left, currVer->right, parent[currVer]};
            
            for ( auto child : children ){            
                if( child and visited.find(child) == visited.end() ){
                    level[child] = level[currVer] + 1;
                    if( level[child] == L  ) ans.push_back(child->val);
                    else q.push(child);
                }
            }
        }
        
    }
    
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        
        if( k == 0 ) return {target->val};
        L = k;
        inorder(root);
        bfs(target);
        
        
        return ans;
    }
};