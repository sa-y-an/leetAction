class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        const int n = nums.size();
        unordered_map <int,vector <int> > umap;
        for( int i = 0 ; i < n ; i++ ) umap[nums[i]].push_back(i);
        
        int cnt = 0;
        for( auto it: umap ){
            auto temp = it.second;
            if( temp.size() > 1 ){
                for( int i = 0 ; i < temp.size() ; i++){
                    for( int j = 0 ; j < temp.size() ; j++) {
                        if( i == j ) continue;
                        if( (temp[i]*temp[j])%k == 0 ) cnt++;
                    }
                }
                
            }
        }
        
        
        
        return cnt/2;
    }
};