class Solution {
public:
    string reverseWords(string s) {
        vector <string> words;
        for( int i = 0; i < s.size(); i++){
            string temp;
            while( i < s.size() and s[i] != ' ') temp.push_back(s[i++]);
            if( temp.size() ) words.push_back(temp);
        }
        reverse(words.begin(), words.end());
        string ans;
        for( string &word : words ) ans += word + " ";
        if (ans.size()) ans.pop_back();
        return ans;
    }
};