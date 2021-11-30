class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
	// solution
	int l=0 , r= 0 , max_sum = nums[0] ;
	int curr_sum = nums[0];

	for( int r = 1 ; r < nums.size() ; r++) {


		if ( curr_sum <= 0 ) {			
			l = r;
			curr_sum = 0;

		}
        
        curr_sum += nums[r];

		max_sum = max(curr_sum, max_sum);
	}

	return max_sum;
        
    }
};