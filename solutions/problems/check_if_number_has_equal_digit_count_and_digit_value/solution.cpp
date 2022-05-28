class Solution {
public:
    bool digitCount(string num) {
        unordered_map <int,int> umap;
        for( auto x : num ) umap[x-'0']++;
        int n = num.size();
        for( int i = 0 ; i < n ; i++){
            if( num[i]-'0' == umap[i]) continue;
            else return false;
        }
        return true;
    }
};