const int M = 1e9+7;
class Solution {
    vector <vector <int>> dp;
public:
    
    int dfs(int n, int target,int k){
                
        if ( target > n*k )
            return 0;
        if( n == 0 && target == 0 )
            return 1;
        if( n == 0 && target > 0 )
            return 0;
        if( target <= 0 || n <= 0 )
            return 0;
        
        if( dp[n][target] != -1 )
            return dp[n][target];
        
        int ans = 0;
        for( int i = 1 ; i <= k ; i++ ){
            if( target - i >= 0 ){
                ans = (ans%M + dfs(n-1,target-i,k)%M)%M ;
            }
        }
        return dp[n][target] = ans%M;
    }
    
    int numRollsToTarget(int n, int k, int target) {
        
        dp.resize(n+1, vector <int> (target+1,-1));
        return dfs(n,target,k);
    }
};