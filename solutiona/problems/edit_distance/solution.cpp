class Solution {
public:
    Solution(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);        
    }

    
    
    
    int minDistance(string str1, string str2) {
        
         vector < vector <int> > dp(str2.size()+1, vector <int>(str1.size()+1,0));

        for( int i = 0 ; i < str2.size()+1 ; i++ ){
            dp[i][0] = i;
        }

        for( int i = 0 ; i < str1.size()+1 ; i++ ){
            dp[0][i] = i;
        }

        for( int j = 1 ; j < str2.size()+1 ; j++ ) {
            for( int i = 1 ; i < str1.size()+1 ; i++ ){
                if( str2[j-1] == str1[i-1] ) dp[j][i] = dp[j-1][i-1];
                else {
                    dp[j][i] = 1+ min( min(dp[j-1][i],dp[j][i-1]), dp[j-1][i-1] );
                }
            }
        }


      return dp[str2.size()][str1.size()];
        
    }
};