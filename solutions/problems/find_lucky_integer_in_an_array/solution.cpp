class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map <int,int> umap;
        for( auto x : arr ) umap[x]++;
        
        int ans = -1;
        for( auto &it : umap){
            if( it.first == it.second and it.first >= ans ) 
                ans = it.first;
        } 
        return ans;
    }
};