class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        vector <int> st(26,0), tar(26,0);
        for( auto ch : s ){
            st[ch-'a']++;
        }
        for( auto ch : target){
            tar[ch-'a']++;
        }
        
        
        int ans = s.size() , n = s.size();
        for( auto ch : target){
            if(st[ch-'a'] < tar[ch-'a']) return 0;
            ans = min(ans, st[ch-'a']/tar[ch-'a']);
        }
        
        return ans;
    }
};