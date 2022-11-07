class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map <int,int> umap;
        for(auto num:nums) umap[num]++;
        int cnt =0;
        if(k==0) {
            for( auto it: umap) if( it.second > 1 ) cnt += 1;
            return cnt;            
        }
        for ( auto it: umap) if( umap.find(it.first+k) != umap.end()) cnt +=1;
        return cnt;
    }
};