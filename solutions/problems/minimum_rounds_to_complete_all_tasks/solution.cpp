class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        
        unordered_map <int,int> umap;
        for( int task : tasks ){
            umap[task]++;
        }
        int ans = 0;
        for( auto &[i,num] : umap ) {
            if ( num == 1 ) return -1;
            ans += (num+2)/3;
        }

        return ans;
    }
};