class Solution {
public:
    int destroyTargets(vector<int>& nums, int space) {
        
        unordered_map <int,int> umap;
        int maxi = 0;
        for( auto &num : nums ) 
            maxi = max(++umap[num%space],maxi);
        
        unordered_set <int> poss;
        for( auto &[r,cnt] : umap) 
            if( cnt == maxi ) poss.insert(r);
            
        int ans = 1e9+10;
        for( auto &num : nums )
            if( poss.count(num%space) ) ans = min(ans, num);
        
        return ans;
    }
};