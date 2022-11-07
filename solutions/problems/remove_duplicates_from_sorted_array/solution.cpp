class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    int removeDuplicates(vector<int>& nums) {
        
        int hole = 0, r = 0;
    
        while( r < nums.size() ){
            int start = nums[r];
            nums[hole] = start;
            hole++;
            r++;
            while( r < nums.size() and nums[r] == start ) r++;   
        }
        
        return hole;
    }
};