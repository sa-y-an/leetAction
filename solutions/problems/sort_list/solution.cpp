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
    ListNode* sortList(ListNode* head) {
        
        if( not head ) return nullptr; 
        multimap <int, ListNode*> lmap;
        while( head ) lmap.insert({head->val,head}), head = head->next;
        
        ListNode* prev = (*lmap.begin()).second;
        for( auto node : lmap){
            prev->next = node.second;
            prev = node.second;
        }
        prev->next = nullptr;
        
        return (*lmap.begin()).second;
        
    }
};