class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> st;
        int l = 0 , r = 0;
        const int n = pushed.size();
        while( l < n){
            while( (l<n) and 
                  (st.empty() or st.top() != popped[r])) {
                st.push(pushed[l]);
                l++;
            }
            while( not st.empty() and st.top() == popped[r]){
                st.pop();
                r++;
            }
        }
        
        return st.empty();
    }
};