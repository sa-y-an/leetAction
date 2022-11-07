class Solution {
public:
    int change(int target, vector<int>& nums) {
    int ways[nums.size()+1][target+1];
	memset(ways,0, sizeof(ways));

	for( int idx = 0 ; idx <= nums.size() ; idx++ ) ways[idx][0] = 1;

	for( int idx = 1 ; idx <= nums.size() ; idx++ ){
		for( int total = 1 ; total <= target ; total++ ){
			if(total >= nums[idx-1])
				ways[idx][total] = ways[idx][total-nums[idx-1]] + ways[idx-1][total];
			else 
				ways[idx][total] = ways[idx-1][total];
		}
	}


	return ways[nums.size()][target];   
    }
};