class Solution {
    vector <pair <int, int>> movements;    
public: 
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }    
    
    struct children{
        int x;
        int y;
        
        children(int _x, int _y){
            x = _x;
            y = _y;
        }
        
        bool isValid( vector<vector<int>>& grid, vector<vector<int>>& level ){
            if( x >= grid[0].size() or y >= grid.size() or y < 0 or x < 0 ) return false;
            if( level[y][x] != -1 ) return false;
            if( grid[y][x] ) return false;
            return true;
        }
    };
    
    void bfs(int x, int y, vector<vector<int>>& grid, vector<vector<int>>& level ){
        
        queue <children> q;
        children parent(x,y);
        q.push(parent);
        level[y][x] = 1;
        
        while( not q.empty()){
            
            auto currVer = q.front();
            q.pop();
            
            for( auto &move : movements ){
                children child(currVer.x + move.first , 
                               currVer.y + move.second);
                if( not child.isValid(grid, level) ) continue;
                level[child.y][child.x] = level[currVer.y][currVer.x] + 1;
                q.push({child.x, child.y});
             }
            
        }
        
    }
    
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        
        if( grid[0][0] or grid[grid.size()-1][grid.size()-1]) return -1;        
        movements = {{1,0},{0,1},{-1,0},{0,-1},{1,1},{-1,-1},{-1,1},{1,-1}};
        vector <vector <int>> level(grid.size(), vector <int> (grid[0].size(),-1) );
        level[0][0] = 1;
        bfs(0,0, grid, level);
        return level[grid.size()-1][grid[0].size()-1];
        
    }
};