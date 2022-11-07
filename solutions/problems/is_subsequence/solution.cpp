class Solution {
public:
    bool isSubsequence(string s, string t) {
        
        unsigned short cnt = 0 , i = 0;
        const unsigned short n = t.size();
        for( auto ch : s ){
            while( i < n and t[i] != ch ) i++;
            if( i< n and t[i] == ch ) cnt++;
            i++;
            if( i >= n ) break;
        }
        
        return cnt == s.size();
    }
};