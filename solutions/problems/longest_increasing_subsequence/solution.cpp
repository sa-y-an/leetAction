class Solution {
    vector <int> dp;
public:
    
    int lcs(vector<int>& nums, int idx, int prev){
        
        if( idx < 0 ) return 0;
        int n = nums.size();
        if( dp[prev-1] != -1 ) return dp[prev-1];
        if( prev == n or nums[idx] < nums[prev] ){
            return dp[prev-1] = max( 1 + lcs(nums,idx-1,idx), lcs(nums,idx-1,prev));    
        }
        else return dp[prev-1] = lcs(nums, idx-1, prev);
    }
    
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        dp.resize(n,-1);
        return lcs(nums, n-1 , n);
    }
};