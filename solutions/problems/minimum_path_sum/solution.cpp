class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    int minPathSum(vector<vector<int>>& grid) {
        const unsigned short int X = grid[0].size(), Y = grid.size();
        short int dp[Y][X];
        dp[Y-1][X-1] = grid[Y-1][X-1];
        
        for( short int y = Y-2 ; y >= 0 ; y--) dp[y][X-1] = grid[y][X-1] + dp[y+1][X-1];
        for( short int x = X-2 ; x >= 0 ; x--) dp[Y-1][x]= grid[Y-1][x] + dp[Y-1][x+1];
        
        for( short int y = Y-2 ; y >= 0 ; y--){
            for( short int x = X-2; x >= 0 ; x--){
                dp[y][x] = min(dp[y+1][x],dp[y][x+1]) + grid[y][x];
            }
        }
        
        return dp[0][0];
        
    }
};