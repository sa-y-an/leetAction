/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    unordered_map <Node*, int > level;
    
    Node* connect(Node* root) {
        
        if( not root) return nullptr;
        
        level[root] = 0;
        queue <Node*> q;
        
        q.push(root);
        while( not q.empty()) {
            
            auto currNode = q.front();
            q.pop();
            
            if( q.empty() or level[q.front()] != level[currNode]) currNode->next = nullptr;
            else currNode->next = q.front(); 
                

            if( currNode->left ){
                level[currNode->left] = level[currNode]+1;
                q.push(currNode->left);
            }
            if( currNode->right){
                level[currNode->right] = level[currNode]+1;
                q.push(currNode->right);
            }
            
        }
        
        return root;
        
        
    }
};