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
    ListNode* oddEvenList(ListNode* head) {
        
        if( head == nullptr or head->next == nullptr or head->next->next == nullptr) return head;
        ListNode* oddStart = head, *evenStart = head->next , *oddEnd = head , *evenEnd = head->next;
        
        head = (head->next)->next;
        
        int k = 1;
        while( head ){
            cout<<head->val<<" "<<k<<"\n";
            if( k%2 == 0 ){
                evenEnd->next = head;
                evenEnd = head;
            }
            else {
                oddEnd->next = head;
                oddEnd = head;
            }
            head = head->next;
            k++;
        }
                
        oddEnd->next = evenStart;
        evenEnd->next = nullptr;
        
        return oddStart;
        
    }
};