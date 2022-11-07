// declared as global variable to avoid passing 
// by default global variables are initialized to 0
const int N = 1e2+10;
const int M = 1e2+10;
int uniquePath[M][N];

class Solution {
public:
    // faster io
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    // actual code     
    
    int uniquePaths(int m, int n) {
        
        // base cases 
        
        
        if ( m == 0 or n == 0 ) return 0; 
        // invalid case, when the bot traces an invalid path
        // like going beyond the boundaries (m,0) or (0,n)
        
        if ( m == 1 and n == 1 ) return 1;
        // when the bot reaches the stage where the start and end are the same
        
        
        // recursion magic 
        // the idea is to recursively explore each path, by going down and right
        // and only keep track of the path that ends in the last cell
        
        // all paths that doesnt end in the cell are invalid and we return 0 ( base case 1)
        
        // once we reach the end cell, there can be 1 way to reach it since end and start coincide ( base case 2)
        
        
        if( not uniquePath[m][n] ){ // check if the value is already memoized
           
            // every time we explore a path by either going right thus m-1
            // or going down ie n-1
            // the total possiblities will be the sum of these two possibilities
            uniquePath[m][n] = uniquePaths(m-1,n) + uniquePaths(m,n-1);
        } 
                
        return uniquePath[m][n];
    }
};