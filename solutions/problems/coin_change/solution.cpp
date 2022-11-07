class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int coinChange(vector<int>& nums, int amount) {
    
    const int inf = INT_MAX-1;
	int minWays[nums.size()+1][amount+1];
	memset(minWays, 0 , sizeof(minWays));
    
	for( int total = 1; total <= amount ; total++ ) minWays[0][total] = inf;
        	

	for( int idx = 1 ; idx <= nums.size() ; idx++ ){
		for( int total = 1 ; total <= amount ; total++  ){
            if( total >= nums[idx-1])
			    minWays[idx][total] =  min( minWays[idx-1][total],1 + minWays[idx][total - nums[idx-1]] );     
			else 
                minWays[idx][total] = minWays[idx-1][total];
		}
	}
	
	return minWays[nums.size()][amount] > INT_MAX-2 ? -1 : minWays[nums.size()][amount];
    }
};