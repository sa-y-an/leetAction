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
    ListNode *detectCycle(ListNode *head) {
        unordered_set <ListNode*> uset;
        for( auto it = head ; it ; it = it->next ){
            if( uset.count(it) > 0 ) return it;
            uset.insert(it);
        }
        return nullptr;
    }
};