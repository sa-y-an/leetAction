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
    ListNode* removeNodes(ListNode* head) {
        
        vector <ListNode*> s;
        for( ListNode* it = head; it ; it = it->next ){
            while( s.size() > 0 and s.back()->val < it->val )
                s.pop_back();
            s.push_back(it);
        }

        for( int i = 0 ; i < s.size()-1 ; i++){
            s[i]->next = s[i+1];
        }

        s[s.size()-1]->next = nullptr;
        return s[0];
    }
};