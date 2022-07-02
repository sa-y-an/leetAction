vector <pair <int,int>> mover = {{1,0},{0,1}, {-1,0},{0,-1}};
class Solution {
public:
    
    int dfs( vector <vector <int>> &grid, int y, int x){
        
        int n = grid.size(), m = grid[0].size();
        grid[y][x] = 2;
        
        int ans = 1;
        for( auto &[dy,dx] : mover ){
            int i = y + dy, j = x +dx;
            if( i >= 0 and i < n and j >= 0 and j < m and grid[i][j] == 1)
                ans += dfs(grid, i,j);
        }
        
        return ans;
    }
    
    
    int numEnclaves(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        for( int y = 0 ; y < n ; y++ ){
            if( grid[y][0] == 1 )
                dfs(grid,y,0);
            if( grid[y][m-1] == 1)
                dfs(grid,y,m-1);
        }
        
        for( int x = 1 ; x < m-1 ; x++){
            if( grid[0][x] == 1 )
                dfs(grid,0,x);
            if( grid[n-1][x] == 1)
                dfs(grid,n-1,x);
        }
        
        int ans = 0;
        for( int i = 1 ; i < n-1 ; i++){
            for(int j = 1 ; j < m-1 ; j++){
                if( grid[i][j] == 1 ){
                    ans += dfs(grid,i,j);
                }
            }
        }
        
        return ans;
    }
};