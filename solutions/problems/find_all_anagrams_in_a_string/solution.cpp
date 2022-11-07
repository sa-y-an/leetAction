class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        
        if( p.size() > s.size() ) return {};
        short int  l = 0 , r = 0;

        
        // vector <short int> word(26,0); // this is the word whose anagram is required
        // vector <short int> window(26,0); // word here
        
        string word(26,'0');
        string window(26,'0');
        
        // my idea is to slide this window over the string s and check for equality in each step
        // this will make it run in O(26*N)
        
        // form word
        for( auto ch: p ) word[ch-'a'] += 1;
        
        // forming the first window
        for( r = 0 ; r < p.size()-1 ; r++ ) window[s[r]-'a']++;
        
        // sliding this window
        
        vector <int> angIndices; // anagram count
        
        while( r < s.size() ){
            window[s[r]-'a']++;
            if( word == window ) angIndices.emplace_back(l);
            window[s[l]-'a']--;
            l++;
            r++;
        }
        
        return angIndices;
        
    }
};