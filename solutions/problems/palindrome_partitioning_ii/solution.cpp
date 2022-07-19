const int INF = 1e8;
class Solution {
    vector <int> dp;
public:
    
    bool isPalindrome(const string &s, const int &l,const int &r){
        
        int i = l, j = r;
        bool ans = true;
        while( i < j ){
            if( s[i++] != s[j--]){
                ans = false;
                break;
            }
        }
        return ans;
    }
    
    int dfs( const string &s, int l, const int n){
        
        if( l == n )
            return 0;
        
        if( dp[l] != -1 )
            return dp[l];
        
        int ans = INF;
        for( int i = l ; i < n ; i++){
            if( isPalindrome(s,l,i) )
                ans = min(ans, 1 + dfs(s,i+1,n));
        }
        return dp[l] = ans;
    }
    
    int minCut(string &s) {
        int n = s.size();
        dp.resize(n,-1);
        return dfs(s,0,n)-1;
    }
};