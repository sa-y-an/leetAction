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

    
    int pairSum(ListNode* head) {
        
        unordered_map <ListNode*,ListNode*> parent;
        parent[head] = nullptr;
        auto it = head; 
        int cnt = 0 ;        
        
        //  [4,2,2,3]
        
        while( it->next != nullptr ) {
            parent[it->next] = it;
            it = it->next; 
            cnt++;
        }
        
        cnt += 1;
        auto l = head, r = it;
        
        int maxTwin = 0;
        
        while( l != nullptr and r != nullptr and l != r ){
            
            int twinSum = l->val + r->val;
            maxTwin = max(twinSum, maxTwin);
            l = l->next;
            r = parent[r];
            
        }  
        
        return maxTwin;
        
        
        
    }
};