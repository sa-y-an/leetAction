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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        auto it = head;
        int len=0;
        while(it) {
            len++;
            it = it->next;
        }
        
        it = head;
        
        if(len == 1 ) return NULL; 
        if(len == n ) return head->next;
        
        int pos = len-n-1;
        
        while(it != NULL and pos--)  it = it->next;
        
        auto prev = it;
        if(it->next == NULL) it = NULL;
        else it = (it->next)->next;
        
        prev->next = it;
        
        return head;
    }
};