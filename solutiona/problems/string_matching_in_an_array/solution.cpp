bool comp(string s1, string s2){
    return s1.size() < s2.size();
}


class Solution {
public:
   
    vector<string> stringMatching(vector<string>& words) {     
        vector <string> ret;
        
        for( int i = 0 ; i < words.size() ; i++ ){
            for( int j = 0 ; j < words.size() ; j++ ){
                if( i == j ) continue;
                if( words[j].find(words[i]) != string::npos){
                    ret.push_back(words[i]);
                    break;
                }
            }
        }
        
        return ret;
    }
};