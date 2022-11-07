class Solution {
public:
    int findMin(vector<int>& nums) {
        int start=0;
        while( start < nums.size() and nums[start] == nums[0]) start++;
        
        // start += 1;
        
        // cout<<start<<" ";
        
        if( start > nums.size() ){
            return nums[start-1] ;
        }
        
	    int end = nums.size()-1 , pos = 0;
	    
	    while( start <= end ){
	        
	        int mid = start + (end-start)/2;
	        if( nums[mid] > nums[0] ){
	            start = mid+1;
	        }else {
	            pos = mid;
	            end = mid-1;
	        }
	        
	    }
	    
	    return nums[pos];
        
    }
};