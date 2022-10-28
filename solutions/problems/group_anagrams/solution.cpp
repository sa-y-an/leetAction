class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector <string>> umap;
        for( auto &str : strs ){
            string copy = str;
            sort(str.begin(), str.end());
            umap[str].push_back(copy);
        }
        
        vector <vector<string>> ans;
        for( auto &[k,v] : umap ){
            ans.push_back(v);
        }
        
        return ans;
    }
};