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

    
    
    void inOrderTraversal(vector <int> &order, TreeNode* root){
        
        if( not root ) return ;
        
        inOrderTraversal(order, root->left);
        order.push_back(root->val);
        inOrderTraversal(order, root->right);
    
    }
    
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector <int> firstArray,secondArray;
        inOrderTraversal(firstArray,root1);
        inOrderTraversal(secondArray,root2);
        
        int left = 0 , right = 0;
        
        vector <int> ret;
        
        while( left < firstArray.size() or right < secondArray.size() ){
            
            if( right == secondArray.size() or 
               ( left < firstArray.size() and firstArray[left] <= secondArray[right]) ) {
                ret.push_back(firstArray[left]);
                left++;
            }
            else {
                ret.push_back(secondArray[right]);
                right++;
            }
            
        }
        
        
        return ret;
    }
};