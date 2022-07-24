class Solution {
public:
    char repeatedCharacter(string s) {
        vector <int> charFreq(26,0);
        char ans;
        for( auto ch : s ){
            charFreq[ch-'a']++;
            if( charFreq[ch-'a'] == 2 ){
                ans = ch;
                break;
            }
        }
        
        return ans;
    }
};