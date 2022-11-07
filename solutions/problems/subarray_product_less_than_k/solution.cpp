class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        
        if(k < 1 ) return 0;
        
        int left = 0, right = 0, product = 1, count = 0  ;
        
        while( right < nums.size() ){
            
            product *= nums[right];
        
            while( left <= right and product >= k) {
                product /= nums[left];
                left++;
            }
            
            count += right - left + 1;
            right++ ;
        }
       
        return count;
    }
};