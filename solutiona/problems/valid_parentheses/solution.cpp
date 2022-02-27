class Solution {
public:
    
    unordered_map <char, int> umap = {
        {'[',1}, {'(',2},{'{',3},
        {']',-1}, {')',-2},{'}',-3},
    };
    bool isValid(string s) {
        
        stack <char> st;
        
        for( auto ch : s){
            if( umap[ch] > 0 ){
                st.push(ch);
            }else{
                if( st.empty()) return false;
                if( umap[st.top()] + umap[ch] != 0 ) return false;
                st.pop();
            }
            
        }
        
        return st.empty();
    }
};