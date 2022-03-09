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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* prev = nullptr;
        ListNode* it = head;
        ListNode* ret = nullptr;
        
        while( it ){
            int start = it->val;
            int cnt = 0;
            while( it->next and it->next->val == start ) it=it->next , cnt++;
            
            if( cnt and prev) { 
                prev->next = it->next;
            }
            else if( cnt == 0 and prev == nullptr ) ret = it , prev = it;
            else if( cnt == 0 and prev ) prev = it;
            
            it = it->next;
        }
        
        return ret;
    }
};