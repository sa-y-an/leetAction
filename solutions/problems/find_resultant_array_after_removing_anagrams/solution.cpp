class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        int i = 0 , n = words.size();
        vector <int> temp;
        vector <string> duplicate = words;
        for( auto &word : duplicate) {
            sort(word.begin(), word.end());
        }
        
        
        while( i < duplicate.size() ){
            
            int cnt = 0, start = i; 
            i++;
            while( i < n and duplicate[i] == duplicate[start] ) {
                i++;
                cnt++;
            }
            temp.push_back(start);
            
        }
        
        vector <string> ret;
        
        for( int i = 0 ; i < temp.size() ; i++) {
            ret.push_back(words[temp[i]]);
        }
        
        return ret;

    }
};