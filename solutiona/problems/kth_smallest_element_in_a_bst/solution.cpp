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

    
    struct retvalues {
	int k;
	int ksmallest;   
    };
    

    void InorderTraversal(TreeNode *tree, retvalues & ret) {

        if ( not tree ) return ;

        InorderTraversal(tree->left, ret) ;

        if( ret.k <= 0 ) return;

        ret.ksmallest = tree->val;
        ret.k -= 1;

        InorderTraversal(tree->right, ret);

    }

    
    int kthSmallest(TreeNode* root, int k) {
        retvalues ret;
	
        ret.k = k;
	
	    InorderTraversal(root,ret);
       
        return ret.ksmallest;
        
    }
};