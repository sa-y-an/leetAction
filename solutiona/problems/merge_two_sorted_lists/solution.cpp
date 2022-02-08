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

    
    
    ListNode* mergeTwoLists(ListNode* left, ListNode* right) {
        ListNode* prev = nullptr, 
        *head = nullptr;
        
        if( not right ) return left;
        if( not left ) return right;
        
        while( left and right ){
            ListNode *curr = nullptr;
            if( left->val > right->val ) {
                curr = right;
                right = right->next;
            }
            else {
                curr = left;
                left = left->next;
            }
            
            if( not prev ) {
                head = prev = curr;
                continue;
            }
            prev->next = curr;
            prev = curr;                

        }
        
        if( left ) prev->next = left;
        if( right ) prev->next = right;
        
        return head;
    }
};