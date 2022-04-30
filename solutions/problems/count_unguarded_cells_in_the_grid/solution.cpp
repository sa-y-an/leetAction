class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        // walls - 4 , guard - 2 , guarded - 1 , unguarded - 0
        vector <vector <int>> grid(m, vector <int> (n,0));
        
        for( auto &guard : guards ){
            grid[guard[0]][guard[1]] = 2;
        }
        
        for( auto &wall : walls ) {
            grid[wall[0]][wall[1]] = 4;
        }
        
        for( auto &guard : guards ){
            
            int x = guard[1], y = guard[0];            
            // left
            int l = x+1;
            while( l < n and grid[y][l] < 2 ) grid[y][l] = 1, l++;
            // right
            int r = x-1;
            while( r >= 0 and grid[y][r] < 2 ) grid[y][r] = 1, r--;
            //up
            int u = y-1;
            while( u >= 0 and grid[u][x] < 2 ) grid[u][x] = 1 , u--;
            // down
            int d = y+1;
            while( d < m and grid[d][x] < 2 ) grid[d][x] = 1, d++;
        }
        
        int cnt = 0;
        
        for( int y = 0 ; y < m ; y++){
            for( int x = 0 ; x < n ; x++){
                if( grid[y][x] == 0 ) {
                    // cout<<y<<" "<<x<<"\n";
                    cnt++;
                }
            }
        }
        
        return cnt;
    }
};