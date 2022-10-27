class Solution {
public:
    
    int convProd(vector<vector<int>> &zeroPad, vector<vector<int>> &mat, int x, int y){
        
        const int n = mat.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ; j++){
                ans += mat[i][j]*zeroPad[i+y][j+x];
            }
        }
        
        return ans;
    }
    
    int largestOverlap(vector<vector<int>>& img1, vector<vector<int>>& img2) {
        
        const int n = img1.size();
        vector<vector<int>> zeroPad(3*n - 2, vector<int> (3*n - 2,0));
        
        
        
        for( int i = 0 ; i < n ; i++){
            for( int j = 0 ; j < n ; j++){
                zeroPad[i + n-1][j + n-1] = img1[i][j];
            }
        }
        
        int ans = 0;
        for( int y = 0; y < 2*n -1 ; y++){
            for( int x = 0 ; x < 2*n -1 ; x++){
                ans = max(ans, convProd(zeroPad, img2, x, y));
            }
        }
        
        return ans;
    }
};