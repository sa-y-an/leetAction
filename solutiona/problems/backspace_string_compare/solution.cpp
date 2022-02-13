class Solution {
public:
    stack <char> simplify(string str){
        stack <char> st;
        for( auto ch: str){
            if( ch == '#' and not st.empty()) st.pop();
            else if (ch == '#') continue;
            else st.push(ch);
        }
        return st;
    }
    
    bool backspaceCompare(string s, string t) {
        return simplify(s) == simplify(t);
    }
};