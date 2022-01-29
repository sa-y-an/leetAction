class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int findMin(vector<int>& nums) {
        int n = nums.size();
	    if( n  == 1 ) return nums[0];
	    int start = 1 , end = n-1 , pos = 0;
	    
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