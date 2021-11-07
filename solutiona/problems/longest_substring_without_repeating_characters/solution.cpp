class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set <char> uset;
        size_t max_len = 0;

        int l = 0 , r = 0 ;

        for( r=0 ; r < s.size() ; r++ ){

            while( uset.find(s[r]) != uset.end() ) {
                uset.erase(s[l]);
                l++;
            }

            uset.insert(s[r]);
            max_len = max(max_len, uset.size());

        }


        return max_len;        
    }
};