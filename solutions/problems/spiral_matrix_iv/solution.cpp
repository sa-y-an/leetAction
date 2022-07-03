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
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        
        vector <vector <int>> grid(m, vector <int> (n,-1));
        
        int start = 0 , endy = m-1 ,endx = n-1;
        
        while( head ){
            
            // traverse x axis of top
            for( int i = start ; i <= endx and head ; i++){
                // cout<< start << " " << i << " " << head->val << "\n";
                grid[start][i] = head->val;
                head = head->next;
            }
            
            // 
            for( int y = start+1 ; y <= endy and head ; y++){
                // cout<< y << " " << endx << " " << head->val << "\n";
                grid[y][endx] = head->val;
                head = head->next;
            }
            
            for( int x = endx-1 ; x >= start and head ; x--){
                // cout<< endy << " " << x << " " << head->val << "\n";
                grid[endy][x] = head->val;
                head = head->next;
            }
            
            for( int y = endy-1 ; y > start and head ; y--){
                // cout<< y << " " << start << " " << head->val << "\n";
                grid[y][start] = head->val;
                head = head->next;
            }
            
            start++;
            endy--;
            endx--;
            
            // cout<< "cycle " << start << " " << endy << " " << endx << "\n";
        }
        
        return grid;
        
    }
};