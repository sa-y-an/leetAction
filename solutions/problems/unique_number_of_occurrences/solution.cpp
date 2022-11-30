class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map <int,int> umap;
        unordered_set <int> s;
        for( auto x : arr ) umap[x]++;
        for( auto &[k,v] : umap) s.insert(v);
        return s.size() == umap.size();    
    }
};