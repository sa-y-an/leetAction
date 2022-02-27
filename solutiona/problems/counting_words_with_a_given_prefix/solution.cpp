class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt = 0;
        const int n = pref.size();
        for( auto &str: words ){
            if( str.size() < pref.size()) continue;
            if( str.substr(0,n) == pref ) cnt++;
        }
        return cnt;
    }
};