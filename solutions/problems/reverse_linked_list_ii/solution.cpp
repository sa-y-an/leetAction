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
    
    ListNode* reverseLL(ListNode* head, ListNode* tail){
        
        if( !head || !head->next || head == tail )
            return head;
        
        auto newHead = reverseLL(head->next, tail);
        head->next->next = head;
        return newHead;
    }
    
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        if( !head->next )
            return head;
        
        ListNode* first = nullptr, *second = nullptr, *prev = nullptr, *end = nullptr;
        bool flag = true;
        
        int cnt = 1;
        for(auto it = head ; it ; it = it->next , cnt++){
            if( cnt == left ){
                first = it;
                flag = false;
            }
            if( cnt == right ){
                second = it;
            }
            if( flag ){
                prev = it;
            }
        }
        
        if( first == nullptr or second == nullptr or first == second){
            return head;
        }
        
        end = second->next;
        if( left > 1){
            prev->next = reverseLL(first,second);
            first->next = end;
        }
        else {
            prev = head;
            auto prev2 = second->next;
            head = reverseLL(first,second);
            prev->next = prev2;
        }
        return head;
    }
};