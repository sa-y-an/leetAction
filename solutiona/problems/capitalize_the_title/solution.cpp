class Solution {
public:

    // Solution(){
    //     ios_base::sync_with_stdio(false);
    //     cin.tie(0);
    //     cout.tie(0);        
    // }

    
    string capitalizeTitle(string title) {
        
        vector <string> words;
        int spaces = 0;
        int i = 0 ;
        while( i < title.size() ){
            
            string temp;
            while( i < title.size() and title[i] != ' ' ) {
                temp.push_back(title[i]);
                i++;
            }
            
            spaces++;            
            
            words.push_back(temp);
            i++;
        }
        
        string ret;
        for( auto word : words ){
            if( word.size() < 3 ) {
                for( int i = 0 ; i < word.size() ; i++ ){
                    ret.push_back(tolower(word[i]));
                }
                if( spaces > 1 ) {
                    ret.push_back(' ');
                    spaces--;
                }
            }
            else {
                ret.push_back(toupper(word[0]));
                for( int i = 1 ; i < word.size() ; i++ ){
                    ret.push_back(tolower(word[i]));
                }
                if( spaces > 1 ) {
                    ret.push_back(' ');
                    spaces--;
                }
            }
        }
        
        return ret;
        
    }
};