int X,Y;
struct children{
    int x;
    int y;

    children(int x,int y){
        this->x = x;
        this->y = y;
    }

    bool validMove(vector < vector <bool> > &visited){
       if( y >= Y or x >= X or y < 0 or x < 0 ) return false; 
       if( visited[y][x] ) return false;
       return true;
    }
};


class Solution {
    vector <pair <int,int>> mover;
    
public:
    
    Solution() {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        

        mover = {{1,0},{0,1},{-1,0},{0,-1}};
    }
    
    void dfs( vector<vector<char>>& grid ,vector < vector <bool> > &visited, int y, int x){
        
        if( y >= Y or x >= X or y < 0 or x < 0 ) return;
        if( grid[y][x] == '0') return;
        visited[y][x] = true;
        
        for( auto move : mover){
            children child(x+move.first, y+move.second);
            if ( child.validMove(visited) ) dfs(grid,visited,child.y,child.x);            
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        
        Y = grid.size() , X = grid[0].size();        
        vector <vector <bool>> visited(Y, vector <bool> (X, false));
        
        int dfsCount = 0 ;
        for( int y = 0 ; y < Y ; y++ ){
            for( int x = 0 ; x < X ; x++){
                if( grid[y][x] == '1') {
                    if( visited[y][x] ) continue;
                    dfs(grid, visited, y, x);
                    dfsCount++;
                }
            }
        }
                
        
        return dfsCount;
    }
};