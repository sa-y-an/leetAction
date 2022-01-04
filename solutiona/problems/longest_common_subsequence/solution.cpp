class Solution {
public:
    
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    int longestCommonSubsequence(string str1, string str2) {
        
        vector < vector <int> > lcs( str2.size()+1 , vector <int> (str1.size()+1 , 0) );
        
        
        const int xlim = str1.size()+1;
        const int ylim = str2.size()+1;
        
        for( int y = ylim-2 ; y >= 0 ; y-- ) {
            for( int x = xlim-2; x >=0 ; x-- ){

                if( str1[x] == str2[y] ) {
                    lcs[y][x] = 1 + lcs[y+1][x+1];
                }
                
                else {
                    lcs[y][x] = max(lcs[y+1][x], lcs[y][x+1]);
                }
                
            }
        }
        
        return lcs[0][0];
        
    }
};