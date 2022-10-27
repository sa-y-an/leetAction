class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        
        int n = mat.size(), ans = 0;
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ; j++){
                if( j == i ) ans += mat[i][j];
                else if ( i+j == n-1 ) ans += mat[i][j];
            }
        }
        
        return ans;
    }
};