/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set <ListNode*> prev;
        auto it = head;
        for( ; it != nullptr ; it = it->next ){
            if( prev.find(it) != prev.end()) return true;
            prev.insert(it);
        }
        
        return false;
    }
};