/*
int numways(vector<vector<int>>& grid, int m, int n){
    if( n == 0 and m == 0 ) return 1;
    if( n < 0 or m < 0 or grid[n][m] == 1 ) return 0;
    if( dp[n][m] != -1 ) return dp[n][m];
    return dp[n][m] = numways(grid, m-1 , n ) + numways(grid, m , n-1);
}
*/

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        if( grid[0][0] or grid[n-1][m-1]) return 0;
        vector <vector <int>> dp(n , vector<int> (m,0));
        dp[0][0] = 1;
        
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( grid[i][j]) continue;
                if( i > 0 ) dp[i][j] += dp[i-1][j];
                if( j > 0 ) dp[i][j] += dp[i][j-1];
            }
        }
        
        return dp[n-1][m-1];
        
    }
};