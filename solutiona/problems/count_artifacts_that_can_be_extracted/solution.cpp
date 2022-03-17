class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        
        
        vector <vector <bool>> isDug( n , vector <bool> (n,false));
        for( auto &it : dig ){
            isDug[it[0]][it[1]] = true;
        }
        
        int cnt= 0;
        for( auto &cells : artifacts){
            
            int starty = cells[0], startx = cells[1], endy = cells[2], endx = cells[3];
            bool flag = false;
            for( int y = starty ; y <= endy ; y++){
                for( int x = startx ; x <= endx ; x++){
                    if( not isDug[y][x]) {
                        flag = true;
                        break;
                    }
                }
                if( flag) break;
            }
            
            if(not flag) cnt++;
            
        }
        
        return cnt;
    }
};