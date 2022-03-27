class Solution {
public:
    int minDeletion(vector<int>& nums) {
        int i = 0 ;
        
        const int n = nums.size();
        int idx = 0;
        int del = 0;
        while( i < n  ){
            
            if( idx%2 != 0 ) {
                i++, idx++;
                continue;
            }
            
            int start = nums[i];
            int currDel = 0;
            while( i+1 < n and nums[i+1] == start ) currDel++, i++;
            del += currDel;
            i++;
            idx++;
        }
        
        if( idx%2 != 0 ) return del+1;
        return del;
    }
};
