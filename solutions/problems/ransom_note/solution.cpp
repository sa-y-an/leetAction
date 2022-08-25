class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector <int> s(26,0) , d(26,0);
        
        for( char ch : magazine )
            d[ch-'a']++;
        for( char ch : ransomNote)
            s[ch-'a']++;
        
        for( int i = 0 ; i < 26 ; i++){
            if( s[i] - d[i] > 0 )
                return false;
        }
        
        return true;
    }
};