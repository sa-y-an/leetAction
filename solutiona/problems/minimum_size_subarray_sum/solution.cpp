class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int minSubArrayLen(int target, vector<int>& nums) {
        
        int l = 0, r = 0 ;
        int minSize = INT_MAX;
        
        int currSum = 0;
        
        while( r < nums.size() and l <= r ) {
                
            while( r < nums.size() and currSum < target ){
                currSum += nums[r];
                r++;
            }
        
            
            while( currSum >= target ){
                minSize = min(minSize, r-l);
                currSum -= nums[l];
                
                l++;   
            }
            
            
        }
        
        return minSize == INT_MAX ? 0 : minSize;
        
        
    }
};