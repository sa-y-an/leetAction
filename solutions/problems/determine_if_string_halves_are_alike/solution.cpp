class Solution {
public:
    bool halvesAreAlike(string s) {
        
        int l = 0 , r = s.size()-1, cl = 0 , cr = 0;
        unordered_set <char> dict = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        while( l < r ){
            if( dict.count(s[l++])) cl++;
            if( dict.count(s[r--])) cr++;
        }

        return cl == cr;
    }
};