class Solution {
public:
    int appendCharacters(string s, string t) {
        
        int l = 0 , r = 0;
        while( l < s.size() && r < t.size() ){
            char ch = t[r];
            while( l < s.size() and s[l] != ch ) l++;
            if( l < s.size()) r++, l++;
        }

        return t.size()-r;
    }
};