class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map <int,int> umap;
        
        int curr = 0;
        umap[curr] = 1;
        
        int ans = 0;
        for( int num : nums ){
                
            curr += num;
            int x = curr - k;
            if( umap.count(x) )
                ans += umap[x];
            
            umap[curr]++;
        }
        
        return ans;
    }
};