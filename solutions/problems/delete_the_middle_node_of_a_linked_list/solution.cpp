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

    
    ListNode* deleteMiddle(ListNode* head) {
        int cnt = 0 ;
        for( auto it = head ; it ; it = it->next) cnt++;
        if( cnt < 2 ) return nullptr;
        auto prev = head;
        for(int i = 0 ; i < floor(cnt/2) - 1 ; i++) prev = prev->next; 
        prev->next= prev->next->next;
        
        return head;
    }
};