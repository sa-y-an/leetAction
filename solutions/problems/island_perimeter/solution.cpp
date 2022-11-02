const vector <pair<int,int>> dz = {{1,0},{0,1},{-1,0},{0,-1}};
class Solution {
public:
    
    int dfs(vector<vector<int>>& grid, int i, int j){
        
        int n = grid.size() , m = grid[0].size();
        grid[i][j] = 2;
        int ans = 4;
        for( auto &[di,dj] : dz ){
            int y = i + di , x = j + dj;
            if( y < 0 or y >= n or x < 0 or x >= m ) continue;
            if( grid[y][x] > 0 ) ans--;
            if( grid[y][x] == 1 ) 
                ans += dfs(grid,y,x);
        }
        
        return ans;
        
    }
    
    int islandPerimeter(vector<vector<int>>& grid) {
        
        int n = grid.size() , m = grid[0].size();
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < m ; j++){
                if( grid[i][j] == 1 )
                    return dfs(grid,i,j);
            }
        }
        
        return 0;
    }
};