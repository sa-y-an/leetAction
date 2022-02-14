class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }
   
    bool isValidMini(vector<vector<char>>& board, int X, int Y){
        
        unordered_set <int> uset;       
        for( int y = Y ; y < Y+3 ; y++){
            for( int x = X ; x < X+3 ; x++){
                if( board[y][x] != '.' ){
                    if( uset.find(board[y][x]) != uset.end() ) return false;
                    uset.insert( board[y][x]);
                }
            }
        }
        return true;
    }
    
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for( int y = 0 ; y < 9 ; y++){
            unordered_set <char> row;
            for( int x = 0 ; x < 9 ; x++){
                if( board[y][x] != '.' ){
                    char ch = board[y][x];
                    if( row.find(ch) == row.end() ) row.insert(ch);
                    else return false;
                }
            }
        }
            
        for( int x = 0 ; x < 9 ; x++){
            unordered_set <char> column;
            for( int y = 0 ; y < 9 ; y++){
                if( board[y][x] != '.' ){
                    char ch = board[y][x];
                    if( column.find(ch) == column.end() ) column.insert(ch);
                    else return false;
                }
            }
        }
        
        for( int y = 0 ; y < 7 ; y += 3 )       
            for( int x = 0 ; x < 7 ; x+= 3 )
                if( not isValidMini(board, x, y) ) return false;
        
        return true;
    }
};