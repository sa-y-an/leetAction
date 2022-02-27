unordered_map <char,int> vowels = {
    {'a',1},{'e',2},{'i',3},{'o',4},{'u',5},
};
string req = "aeiou";

class Solution {
public:
    Solution() {
        std::ios::sync_with_stdio(false);
        std::cin.tie(nullptr);
    }
    
    int longestBeautifulSubstring(string word) {        
        int i = 0, length = 0;
        
        while( i < word.size()){
            if( word[i] == 'a'){
                string window = "a";
                int l = i;
                i++;
                while( word[i] == window.back() or 
                      vowels[word[i]] == vowels[window.back()] +1 ) {
                    if( window.back() != word[i]) window.push_back(word[i]);
                    i++;
                }
                if( window == req) length = max(length, i-l);
            }
            else i++;                   
        }
        
        return length;
    }
};