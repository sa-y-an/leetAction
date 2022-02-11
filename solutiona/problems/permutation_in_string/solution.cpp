class Solution {
public:       
    bool checkInclusion(string s1, string s2) {        
        
        string m1(26,0), m2(26,0);
        for( auto ch : s1) m1[ch-'a']++;
        
        for( int r = 0 ; r < s2.size() ; r++){
            m2[s2[r]-'a']++;
            if( r >= s1.size() ) m2[s2[r-s1.size()] - 'a']--;
            if( m2 == m1) return true;
        }
        
        return false;
        
    }
};