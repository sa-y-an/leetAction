class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        vector<int> onesRows(n,0);
        vector<int> onesColumns(m,0);
        
        for( int y = 0 ; y < n ; y++){
            int cnt = 0;
            for(int x = 0 ; x < m ;  x++){
                cnt += grid[y][x];
            }
            onesRows[y] = cnt;
        }
        
        for( int x = 0 ; x < m ; x++){
            int cnt = 0 ;
            for( int y = 0 ; y < n ; y++){
                cnt += grid[y][x];
            }
            onesColumns[x] = cnt;
        }
        
        vector<vector<int>> ans(n,vector<int> (m,0));
        
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                ans[i][j] = onesRows[i]+onesColumns[j] - (n+m - onesRows[i]-onesColumns[j]);
            }
        }
        
        return ans;
    }
};