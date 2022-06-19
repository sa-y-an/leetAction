class Solution {
    unordered_map <char, int> umap;
public:
    string greatestLetter(string s) {
        
        vector <char> poss;
        string ans;
        for( auto ch : s ){
            if( islower(ch) ){
                umap[ch] = 1;
            }
        }    
        for( auto ch : s ){
            if( isupper(ch) and umap.count(tolower(ch)) > 0 ){
                poss.push_back(ch);
            }
        }
        sort( poss.begin(), poss.end());
        if( poss.size() == 0 ) return "";
        ans += poss.back();
        return ans;
    }
};