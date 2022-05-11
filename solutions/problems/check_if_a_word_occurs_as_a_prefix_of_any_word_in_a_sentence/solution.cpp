class Solution {
public:
    int isPrefixOfWord(string s, string searchWord) {
        int i = 0, sz= searchWord.size(), n = s.size();
        int cnt = 1;
        while( i < n ){
            
            string temp;
            while( i < n and s[i] != ' ' ) temp.push_back(s[i++]);
            if( temp.size() >= sz ){
                auto it = temp.find(searchWord);
                if( it != string::npos and it == 0 ) return cnt;
            }
            cnt++;
            i++;
            
        }
        return -1;
    }
};