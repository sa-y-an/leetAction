int X,Y;
class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
    
    vector <vector<int>> longestPath;
    struct children{
        int x;
        int y;
        children(int x,int y){
            this->x = x , this-> y = y;
        }
        bool validMove(vector < vector <int> > & matrix, int &px , int &py){
            if( x >= X or y >= Y or x < 0 or y < 0 ) return false;
            if( matrix[py][px] >= matrix[y][x] ) return false;
            return true;
        }
    };
    
    int dfs(vector<vector<int>>& matrix,int x,int y){
        
        if( longestPath[y][x] != -1 ) return longestPath[y][x];        
        vector < pair <int,int> > mover = {{1,0},{0,1},{-1,0},{0,-1}};
        
        int lp = 0;
        
        for( auto move : mover ){
            children child(x+move.first, y+move.second);
            if( not child.validMove(matrix, x,y) ) continue;
            if( longestPath[child.y][child.x] != -1 ) 
                lp = max(lp, 1+ longestPath[child.y][child.x]);
            else lp = max(lp,1+dfs(matrix,child.x,child.y));
        }
        
        return longestPath[y][x] = lp;
            
    }
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        Y = matrix.size(), X = matrix[0].size();
        longestPath.resize(Y,vector<int> (X,-1));
        
        int lp = 0;
        for( int y = 0 ; y < Y ; y++){
            for( int x = 0 ; x < X ; x++){
                if( longestPath[y][x] != -1 ) lp = max( lp, longestPath[y][x]);
                else lp = max(lp, dfs(matrix,x,y));
            }
        }
        
        return lp+1;
    }
};