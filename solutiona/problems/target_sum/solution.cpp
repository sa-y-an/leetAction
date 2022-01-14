class Solution {
public:
    
    int findTargetSumWays(vector<int>& nums, int target) {

    int sum = accumulate(nums.begin(), nums.end(),0);
    if(sum < target || (sum - target)%2 != 0)  return 0;
    

	sum = (target + accumulate(nums.begin(), nums.end(),0))/2;
    if( sum < 0) return 0;

	int ways[nums.size()+1][sum+1];
	memset(ways,0, sizeof(ways));

	ways[0][0] = 1;
	
	for( int idx = 1 ; idx <= nums.size() ; idx++ ){
		for( int total = 0 ; total <= sum ; total++ ){
			if( total >= nums[idx-1] )
				ways[idx][total] = ways[idx-1][total-nums[idx-1]] + ways[idx-1][total];
			else 
				ways[idx][total] = ways[idx-1][total];
		}
	}

	return ways[nums.size()][sum];
        
    }
};