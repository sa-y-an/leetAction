class Solution {
public:
    bool check(vector<int>& nums) {
        
        int i = 0, n = nums.size()-1 ;
        
        int inc1 = 0, inc2= 0 ; 
        while( i <= n-1 and nums[i] <= nums[i+1]) {
            inc1++;
            i++;
        }
        
        if( i > n-1 and inc1 == n ) return true;
        
        int start = nums[i];
        
        i++;
        while( i <= n-1 and nums[i] <= nums[i+1]) {
            inc2++;
            i++;
        }
        
        int end = nums[i];
        // cout<<end<<" "<<s;
        
        
        if( inc1+inc2 == nums.size()-2 and nums[0] >= end ) return true;
        return false;
    }
};