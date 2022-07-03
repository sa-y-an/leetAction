class Solution {
public:
    string decodeMessage(string key, string message) {
        
        unordered_map <char,char> mpp;
        mpp[' '] = ' ';
        char x = 'a';
        for( auto ch : key ){
            if( mpp.count(ch) == 0 ){
                mpp[ch] = x;
                x++;
            }
        }
        
        string ans;
        for( auto ch : message ){
            ans.push_back(mpp[ch]);
        }
        
        return ans;
    }
};