class Solution {
public:
    bool detectCapitalUse(string word) {
        
        int upper = 0 , lower = 0 ;
        for( auto ch:word){
            if( isupper(ch) ) upper++;
            else lower++;
        }
        
        return ( lower == word.size() or  upper == word.size() or 
                ( isupper(word[0]) and lower == word.size()-1));
    }
};