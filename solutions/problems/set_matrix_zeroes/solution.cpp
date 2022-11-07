class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        unordered_set <int> zeroRow, zeroColumn;
        
        for(int row = 0 ; row < matrix.size() ; ++row ) {
            for(int column = 0 ; column < matrix[row].size() ; ++column ){
                if( matrix[row][column] == 0 ) {
                    zeroRow.insert(row);
                    zeroColumn.insert(column);
                }
            }
        }
        
        // making rows zero 
        
        for( auto row : zeroRow ){
            
            for( int i = 0 ; i < matrix[row].size() ; i++ ){
                matrix[row][i] = 0 ;
            }
            
        }
        
        // for columns
        
        for( auto column : zeroColumn ){
            
            for( int i = 0 ; i < matrix.size() ; i++ ){
                matrix[i][column] = 0 ;
            }
            
        }
        
        
        
        
        
    }
};