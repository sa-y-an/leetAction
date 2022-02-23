class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int acc = 0;
        unordered_map <char, int> map1,map2;
        const int n = s1.size();
        for( int i = 0 ; i < n ; i++ ){
            if( s1[i] != s2[i]) acc++;
            map1[s1[i]]++;
            map2[s2[i]]++;
        }
        
        return acc < 3 and map1 == map2;
    }
};