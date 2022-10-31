class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        
        int n = matrix.size() , m = matrix[0].size();
        int Y = n-1;
        
        for( int i = Y ; i >= 0 ; i--){
            int y = i, x = 0;
            unordered_set <int> s;
            while( y < n and x < m ){
                s.insert(matrix[y][x]);
                y++, x++;
            }
            if( s.size() != 1 )
                return false;
        }
        
        for( int j = 1 ; j < m  ; j++){
            int y = 0, x = j;
            unordered_set <int> s;
            while( y < n and x < m ){
                s.insert(matrix[y][x]);
                y++, x++;
            }
            if( s.size() != 1 )
                return false;
        }
        
        return true;
    }
};