class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        
        unordered_map <int,int> umap;
        for( auto it: nums) umap[it]++;
        
        int count = 0;
        for( auto it: umap ){
            int n = it.second;
            count += (n*(n-1))/2;
        }
        
        return count;
    }
};
