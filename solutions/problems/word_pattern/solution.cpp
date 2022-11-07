class Solution {
public:
    bool wordPattern(string pattern, string s) {
        
        vector <string> words;
        for(int r = 0 ; r < s.size() ; r++){
            
            string word;
            
            while(r < s.size() and s[r] != ' '){
                word.push_back(s[r]);
                r++;
            }
            
            words.push_back(word);
        }
        
        
        unordered_map <char,vector <int>> patternIndices;
        unordered_map <string, vector <int>> wordIndices;
        
        if( words.size() != pattern.size()) return false;
        
        for( int i = 0 ; i < pattern.size() ; i++ ){
            patternIndices[pattern[i]].push_back(i);
            wordIndices[words[i]].push_back(i);
            
            if( patternIndices[pattern[i]] != wordIndices[words[i]] ) return false;
        }
        
               
       return true; 
    }
};