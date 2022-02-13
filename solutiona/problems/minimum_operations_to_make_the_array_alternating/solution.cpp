class Solution {
public:
    
    vector <int> idxMax(vector<int> &nums, int start){
        unordered_map <int,int> umap;
        int freq = INT_MIN,val = INT_MIN;

        for( int i = start ; i < nums.size() ; i += 2) umap[nums[i]]++;
        
        // first frequent
        for( auto it : umap) if( it.second > freq ) freq = it.second, val = it.first;
        if( umap.size() == 1 ) return {val,freq,0}; // only 1 element is present in the indices
        
        // second frequent
        int f2 = INT_MIN;
        for( auto it : umap) if( it.second > f2 and it.first != val ) f2 = it.second;
        return {val,freq,f2};
    }
    
    
    int minimumOperations(vector<int>& nums) {
        
        const int n = nums.size();
        if( n == 1) return 0;

        vector <int> idxE = idxMax(nums, 0), idxO = idxMax(nums, 1);      
        int even = (n+1)/2, odd = n/2;
        
        if( idxE[0] != idxO[0] ) {
            even -= idxE[1];
            odd -= idxO[1];
            return even+odd;
        }
        
        return min( even-idxE[1]+odd-idxO[2] , even-idxE[2]+odd-idxO[1] );
    }
};