vector <pair <int,int>> mover = {{1,0},{0,1},{0,-1},{-1,0}};
class Solution {
public:
    
    
    int dfs(vector <vector <int>> &grid, int color, int y,int x){
        
        int n = grid.size(), m = grid[0].size();
        grid[y][x] = color;
        int ans = 1;
        for( auto &[dy,dx] : mover ){
            int i = y + dy , j = x + dx;
            if( i >= 0 and i < n and j >= 0 and j < m and grid[i][j] == 1 ){
                ans += dfs(grid,color,i,j);
            }
        }
        
        return ans;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        
        int n = grid.size(), m = grid[0].size();
        int ans = 0, color = 2 ;
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( grid[i][j] == 1 )
                    ans = max(ans, dfs(grid,color++,i,j));
            }
        }
        
        return ans;
    }
};