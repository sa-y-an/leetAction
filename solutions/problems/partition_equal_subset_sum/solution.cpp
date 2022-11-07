class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    

    bool canPartition(vector<int>& nums) {
        int total = accumulate(nums.begin(), nums.end(), 0);
        if( total%2 != 0 ) return false;
        total /= 2;

        vector < vector <bool> > dp( nums.size()+1 , vector<bool>(total+1, false) );
        for( int idx = 0 ; idx < nums.size()+1 ; idx++) dp[idx][0] = true;

        for( int idx = 1 ; idx <= nums.size() ; idx++) {
            for( int target = 1 ; target <= total ; target++ ){
                if(target - nums[idx-1] >= 0 )
                    dp[idx][target] = dp[idx-1][target] or dp[idx-1][target-nums[idx-1]];
                else dp[idx][target] = dp[idx-1][target];
            }
        }


        return dp[nums.size()][total];
    }
};