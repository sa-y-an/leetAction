/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    bool isPalindrome(ListNode* head) {
        auto left = head;
        auto right = head;
        
        unordered_map <ListNode*, ListNode*> parent;
        
        while(right->next){
            parent[right->next] = right;
            right = right->next;
        }
        
        while(left != nullptr and left != right){
            if( left->val != right->val ) {
                return false;
            }
            left = left->next;
            right = parent[right];
        }
        
        return true;
    }
};