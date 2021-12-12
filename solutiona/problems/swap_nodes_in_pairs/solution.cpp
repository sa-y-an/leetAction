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
    ListNode* swapPairs(ListNode* head) {

        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
        
        if(head and head->next) {
            
            auto second = head->next;
            auto third = second->next;
            
            second->next = head;
            head->next = swapPairs(third);
            
            return second;
        }
        
        if(head) return head;
        
        return nullptr;
        
    }
};