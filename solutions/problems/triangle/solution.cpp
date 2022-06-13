const int INF = 1e7;
class Solution {
    vector <vector <int>> dp;
public:

    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n = triangle.size();
        vector <int> prev(n+1,0);
        vector <int> curr(n+1,0);
        
        for( int i = n-1 ; i >= 0 ; i--){
            int m = triangle[i].size();
            for( int j = m-1 ; j >= 0 ; j--){
                curr[j] = triangle[i][j] + min(prev[j+1], prev[j]);
            }
            prev = curr;
        }
        return curr[0];
    }
};