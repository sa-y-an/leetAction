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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
          
        auto n3 = new ListNode;
        
        n3->val = (l1->val+ l2->val)%10;
        n3->next = NULL;
        
        auto l3 = n3;
        
        auto n1 = l1->next;
        auto n2 = l2->next;
        
        
        int sum = (l1->val+ l2->val)/10;

        while(n1 || n2 || sum>0 ){
            
            auto it = new ListNode;
            it->next = NULL;
            
            if(n1){
                
                sum += n1->val;
                n1 = n1->next;
              
            }
            
            if(n2){
                
                sum += n2->val;
                n2 = n2->next;
                
            }
            
            it->val = sum%10;
            sum /= 10;
                                
            n3 -> next = it;
            n3 = it;
            
                 
        }
        
         
        return l3;
        
        
    }
};