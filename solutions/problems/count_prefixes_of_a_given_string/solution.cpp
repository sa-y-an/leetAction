class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        
        int cnt = 0;
        
        for( auto &word : words ){
            if( s.find(word) != string::npos and s.find(word) == 0 ) cnt++;
        }
        
        return cnt;
    }
};