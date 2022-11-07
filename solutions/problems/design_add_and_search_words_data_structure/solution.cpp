class WordDictionary {
public:
    
    unordered_map <int, vector <string> > umap;
    
    bool dotMatch( string & str, string & dotted){
        
        for( int i = 0 ; i < dotted.size() ; i++ ){
            if(dotted[i] == '.' ) continue;
            if( dotted[i] != str[i] ) return false;
        }
        
        return true;
    }
    
    WordDictionary() {
        
    }
    
    void addWord(string word) {
        
        umap[word.size()].push_back(word);
        
    }
    
    bool search(string word) {
        
        if( umap.find(word.size()) == umap.end()) return false;
        auto storedWords = umap[word.size()];
        
        for( auto it: storedWords){
            if (dotMatch(it,word) ) return true;
        }
        
        return false;   
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */