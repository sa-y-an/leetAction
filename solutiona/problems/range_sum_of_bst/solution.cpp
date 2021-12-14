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

#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
static auto _ = [] ()
{ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);return 0;}();

class Solution {
public:
    

    int rangeSumBST(TreeNode* root, int low, int high, int rangeSum = 0) {
        
        if( not root)  return 0;
        
        int value = root->val;
        
        if( value >= low and value <= high ) {
            rangeSum += value;
            rangeSum += rangeSumBST(root->left, low, high);
            rangeSum += rangeSumBST(root->right, low, high);
            return rangeSum;
        }
        else if ( value < low ) return rangeSumBST(root->right, low, high, rangeSum);
        else return rangeSumBST(root->left, low, high, rangeSum);
            
    }
};