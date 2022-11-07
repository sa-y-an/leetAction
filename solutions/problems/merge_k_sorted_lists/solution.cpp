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

struct Compare{
    bool operator() (ListNode* a, ListNode* b){
        return a->val > b->val;
    }
};

class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue < ListNode* , vector<ListNode*> , Compare > pq;
        const int n = lists.size();
        ListNode* curr = nullptr;
        
        for( int i = 0 ; i < n ; i++){
            if( lists[i]) pq.push(lists[i]);
        }
        
        if( pq.empty()) return curr;
        
        ListNode* head;
        curr = pq.top();
        head = curr;
        pq.pop();
        
        if( curr->next ) pq.push(curr->next);
        ListNode* prev = curr;
        
        while( not pq.empty()){
            curr = pq.top();
            pq.pop();
            prev->next = curr;
            if( curr->next ) pq.push(curr->next);
            prev = curr;
        }
        
        curr->next = nullptr;
        return head;
    }
};