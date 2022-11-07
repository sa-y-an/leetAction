class Solution {
public:
    int lengthOfLongestSubstring(string& s) {
        
        int l = 0, r= 0;
        const int n = s.size();
        int ans = 0;
        unordered_set <char> st;
        while( r < n ){
            while( r < n and st.count(s[r]) == 0 ){
                st.insert(s[r]);
                r++;
                ans = max(ans, r-l);
            }
            while( l <= r and s[l] != s[r]) {
                st.erase(s[l]);
                l++;
            }
            st.erase(s[l]);
            l++;
        }
        
        return ans;
        
    }
};