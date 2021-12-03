class Solution {
public:
    bool isValid(string s) {
        
    unordered_map <char,int> umap = 
    {
        { '(' , -1},
        { '{' , -2},
        { '[' , -3},
        { ')' ,  1},
        { '}' ,  2},
        { ']' ,  3},
        
    };

    stack <char> st;
                 
    for(auto val: s) {
        
        if(st.empty()) {
            if(umap[val] > 0 ) return false;
            st.push(val);            
        }
        else {
            
            if(umap[val] > 0 ) {
                if(umap[st.top()] + umap[val] != 0 ) return false;
                st.pop();
            }
            else {
                st.push(val);
            }
                       
        }
    }
        
        if( st.empty() ) return true;
        return false;   
    }
};