class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        
        
        map <int,int> umap;
        for( auto &item : items1 ){
            umap[item[0]] += item[1];
        }
        
        for( auto &item : items2 ){
            umap[item[0]] += item[1];
        }
        
        vector <vector <int>> ans;
        for( auto &temp : umap){
            ans.push_back({temp.first,temp.second});
        }
        return ans;
    }
};