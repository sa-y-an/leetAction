vector <pair <int, int>> movements = {{1,0},{0,1},{-1,0},{0,-1}};

class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    bool taken[7][7];
    int X, Y;
    string target;
    
    bool isValid ( int x , int y, vector <vector <char>> &grid, string &chosen ){
        if( x >= X or y >= Y or x < 0 or y < 0 ) return false;
        if( taken[y][x] ) return false;
        if( target[chosen.size()] != grid[y][x] ) return false;
        return true;
    }
    
    bool dfs(int x, int y, vector <vector <char>> &grid, string chosen=""){
        
        chosen.push_back(grid[y][x]);
        taken[y][x] = true;
        
        if( chosen.size() == target.size() ) return true;
        
        for( auto move : movements ){
            if( not isValid(x+move.first, y+move.second, grid, chosen) ) continue;
            if (dfs(x+move.first, y+move.second,grid, chosen)) return true;
        }
        
        taken[y][x] = false;
        return false;   
    }
    
    bool exist(vector<vector<char>>& board, string word) {
        
        X = board[0].size() , Y = board.size();
        target = word;
        
        for( int y = 0 ; y < Y ; y++){
            for( int x = 0 ; x < X ; x++){
                if( board[y][x] == word[0]) {
                    memset(taken, false, sizeof(taken));
                    if( dfs(x,y,board) ) return true;
                }       
            }
        }
        
        return false;
        
    }
};