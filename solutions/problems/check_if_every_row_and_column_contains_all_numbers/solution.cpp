class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        
        int n = matrix.size();
        for( int i = 0 ; i < n ; i++){
            unordered_set <int> us;
            for( int j = 0 ; j < n ; j++){
                int curr = matrix[i][j];
                if( curr >= 1 and curr <= n )
                    us.insert(curr);
            }
            if( us.size() != n ) return false;
        }
        
        for( int x = 0 ; x < n ; x++){
            unordered_set <int> us;
            for( int y = 0 ; y < n ; y++){
                int curr = matrix[y][x];
                if( curr >= 1 and curr <= n )
                    us.insert(curr);
            }
            if( us.size() != n ) return false;
        }
        
        return true;
        
    }
};