class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int search(vector<int>& nums, int target) {
        
        if( nums.size() == 1 ) {
            if( nums[0] == target ) return 0;
            else return -1;
        }
        
        int start = 1 , end = nums.size()-1, pos = 0;
        
        while( start <= end ){
            
            int mid = start + (end-start)/2;
            if( nums[0] < nums[mid] ){
                start = mid+1;
            }
            else {
                pos = mid;
                end = mid-1;
            }
        }
        
        
        
        if ( pos == 0 ) {
            start = 0 ; 
            end = nums.size()-1;
        }
        else {
            
            if( target >= nums[pos] and target <= nums[nums.size()-1]){
                start = pos ;
                end = nums.size()-1;
            }
            else {
                start = 0 ; 
                end = pos - 1;
            }
            
        }
        
        
        
        
        while( start <= end ){
            int mid = start + (end-start)/2;
            if( nums[mid] > target ) {
                end = mid-1;
            }
            else if( nums[mid] < target ){
                start = mid+1;
            }
            else return mid;
        }
        
        return -1;
        
    }
};