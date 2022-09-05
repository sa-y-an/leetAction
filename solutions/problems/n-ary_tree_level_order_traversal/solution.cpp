/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        
        if(!root)
            return {};
        
        vector <vector <int>> ans;
        queue <Node*> q;
        q.push(root);
        
        while( !q.empty()){
            
            int sz = q.size();
            vector <int> level;
            for( ; sz-- ; q.pop()){
                auto curr = q.front();
                level.push_back(curr->val);
                for( auto node : curr->children )
                    q.push(node);
            }
            ans.push_back(level);
        }
        return ans;
    }
};