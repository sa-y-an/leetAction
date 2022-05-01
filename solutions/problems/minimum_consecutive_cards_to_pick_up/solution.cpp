const int INF = 1e9+7;
class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        
        unordered_map <int, vector <int>> umap;
        for( int i = 0 ; i < cards.size() ; i++){
            umap[cards[i]].push_back(i);
        }
        
        int diff = INF;
        for(auto &it : umap) {
            if( it.second.size() > 0 ){
                int prev = it.second[0];
                for( int i = 1 ; i < it.second.size() ; i++){
                    diff = min(diff, it.second[i]-prev+1);
                    prev = it.second[i];
                }
            }
        }
        
        if( diff == INF) return -1;
        return diff;
        
    }
};