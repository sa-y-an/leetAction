class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack < pair<char,int> > st;
        unordered_set <int> toSkip;
        
        for( int i = 0 ; i < s.size() ; i++){
            if( s[i] == '(' ) {
                st.push({'(',i});
            }
            else if( s[i] == ')') {
                if( not st.empty() and st.top().first == '(' ) st.pop();
                else toSkip.insert(i);
            }
        }
        
        while( not st.empty() ){
            toSkip.insert(st.top().second);
            st.pop();
        }
        
        
        string builder;
        for( int i = 0 ; i < s.size(); i++){
            if( toSkip.find(i) != toSkip.end()) continue;
            builder.push_back(s[i]);
        }
        
        return builder;
    }
};