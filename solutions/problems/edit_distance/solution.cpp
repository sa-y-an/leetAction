class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    int minDistance(string word1, string word2) {
        
        vector <vector<int>> editDistance ( word1.size()+1 , vector <int> (word2.size()+1,0) );
        const int ylim = word1.size()+1;
        const int xlim = word2.size()+1;
        
        for( int y = ylim-1 ; y >= 0 ; y-- ){
            editDistance[y][xlim-1] = ylim-y-1;
        }
        
        for( int x = xlim - 1 ; x >= 0 ; x-- ){
            editDistance[ylim-1][x] = xlim-x-1;
        }
        
        for( int y = ylim-2; y >= 0 ; y-- ){
            for( int x = xlim-2 ; x >= 0 ; x--  ){
                if( word1[y] == word2[x] ){
                    editDistance[y][x] = editDistance[y+1][x+1];
                }
                else {
                    editDistance[y][x] = 1 + min( min(editDistance[y+1][x], editDistance[y][x+1]),
                                                 editDistance[y+1][x+1]);
                }
            }
        }
        
                                                 
      return editDistance[0][0];
    }
};