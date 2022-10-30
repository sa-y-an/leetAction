const vector <pair<int,int>> mover = {{1,0},{0,1},{-1,0},{0,-1}};
class Solution {
public:
    int shortestPath(vector<vector<int>>& grid, int k) {
        
        queue <vector<int>> q;
        int n = grid.size(), m = grid[0].size();
        q.push({0,0,k,0});
        bool visited[n+1][m+1][k+1];
        memset(visited, false, sizeof(visited));
        while( !q.empty() ){
            vector<int> curr = q.front();
            q.pop();
            int y = curr[0], x = curr[1] , obsRemoved = curr[2], steps = curr[3];
            if( grid[y][x] == 1 and obsRemoved == 0 ) 
                continue;
            if ( y == n-1 and x == m-1 )
                return steps;
            if( grid[y][x] == 1 ) 
                obsRemoved--;
            for( auto &[dy,dx] : mover ){
                int i = y + dy , j = x + dx;
                if( i < 0 or i >= n or j < 0 or j >= m  or visited[i][j][obsRemoved] )
                    continue;
                visited[i][j][obsRemoved] = true;
                q.push({i,j,obsRemoved, steps + 1}); 
            }
        }
        
        return -1;
    }
};