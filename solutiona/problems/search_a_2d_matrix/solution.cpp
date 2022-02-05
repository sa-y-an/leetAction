class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int m = matrix.size(),
            n = matrix[0].size(),
            high = m*n-1,
            low = 0;
        
        while( low <= high ){
            
            int mid = low + (high-low)/2;
            
            int mid_x = mid%n,
                mid_y = mid/n;
            
            if( matrix[mid_y][mid_x] > target ) {
                high = mid-1;
            }
            else if(matrix[mid_y][mid_x]  < target ){
                low = mid+1;
            }
            else return true;           
            
        }
        
        return false;
        
    }
};