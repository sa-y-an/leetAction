class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector < vector <int> > pascal;
     
        pascal.push_back({1});
        
        if( numRows == 1 ) return pascal;
        
        pascal.push_back({1,1});
        
        if( numRows == 2 ) return pascal;
        
        for( int row = 3 ; row < numRows+1 ; ++row ) {
            
            vector <int> temp(row, 1);
            
            for( int j = 0 ; j < row-2 ; j++ ){
                temp[j+1] = (pascal[row-2][j] + pascal[row-2][j+1] ); 
            }
            
            pascal.push_back(temp);
        } 
        
        return pascal;     
    }
};