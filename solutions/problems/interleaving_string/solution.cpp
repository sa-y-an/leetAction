class Solution {
    vector <vector <int>> dp;
public:
    
    bool isPossible( string &s1, string &s2, string &s, int i1, int i2, int j ){
        
        if( j == 0 )
            return true;
        if( i1 == 0 and i2 == 0 )
            return false;
        
        if( dp[i1][i2] != -1 )
            return dp[i1][i2];
        
        bool ans = false;
        if( i1 > 0 and s1[i1-1] == s[j-1] ){
            ans |= ( isPossible(s1,s2,s,i1-1,i2,j-1) || isPossible(s1,s2,s,i1-1,i2,j) );
        }
        
        if( i2 > 0 and s2[i2-1] == s[j-1] ){
            ans |= ( isPossible(s1,s2,s,i1,i2-1,j-1) || isPossible(s1,s2,s,i1,i2-1,j) );
        }
        
        return dp[i1][i2] = ans;   
    }
    
    
    bool isInterleave(string s1, string s2, string s3) {
        
        int m = s3.size();
        int n1 = s1.size();
        int n2 = s2.size();
        
        if( m != n1+n2 )
            return false;
        
        dp.resize(n1+1, vector <int> (n2+1,-1));
        return isPossible(s1,s2,s3,n1,n2,m);
    }
};