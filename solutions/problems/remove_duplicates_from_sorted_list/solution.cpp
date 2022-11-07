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
	
	if( not head ) return head;
        
    ListNode *it, *prev = head;
	
	
	for( it = head-> next ; it != NULL ; it = it->next ){
		
		if( prev->val == it->val ) {			
			prev->next = it->next;			
		}
		else {
			prev = it;
		}
		
	}
	
	
	
  return head;
        
        
    }
};