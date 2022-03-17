class Solution {
    unordered_map <int, int> closing;
public:
    
    int eval(int start, int end){
        if( start == end-1 ) return 1;
        int close = closing[start];
        if( close == end )
            return eval(start+1, close-1)*2;
        else
            return eval(start, close) + eval(close+1, end);
    }
    
    int scoreOfParentheses(string s) {
        
        stack <int> st;
        for( int i = 0 ; i < s.size() ; i++){
            if( s[i] == '(') st.push(i);
            else {
                closing[st.top()] = i;
                st.pop();
            }
        }
        
        return eval(0, s.size()-1);      
    }
};