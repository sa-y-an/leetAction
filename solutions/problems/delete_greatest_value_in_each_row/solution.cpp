class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        int n = grid.size() , m = grid[0].size();
        for( int y = 0 ; y < n ; y++){
            sort(grid[y].begin(), grid[y].end());
        }
        int ans = 0;
        for ( int x = 0 ; x < m ; x++){
            int maxi = 0;
            for( int y = 0 ; y < n ; y++){
                maxi = max(maxi, grid[y][x]);
            }
            ans += maxi;
        }

        return ans;
    }
};